import React, { Component } from 'react';
import logo from './logo.svg';
import './App.css';
import LampUnit from './lamp/index';
import axios from 'axios';


class App extends Component {
  req=()=>{
    axios.get('http://localhost:8000/bridge/data/').then(
      (res)=>{
        if (!res.data.hold)
          this.setState({payload:res.data});
    }
    )
    console.log(this.state)
  }
  componentDidMount(){
    let counter = setInterval(this.req,100);
  }
  constructor(props){
    super(props);
    this.state={
      payload:undefined
    }

  }
  render() {
    let LampArray=[]
    let counter = 0
    const {payload }=this.state
    let withExtra = false
    if(payload!==undefined){
      if(payload.status!=undefined)
        LampArray=payload.status
      if(payload.counter!=undefined)
        counter = payload.counter
      if(payload.extra!=undefined &&payload.extra!=null)
        withExtra=true

    }
    LampArray = LampArray.map((e,v)=><LampUnit light={e} key={v}/>)
    return (
      <div className="App">
      <div style={
        {
          display:"flex",
          justifyContent:"center"
          

        }

      }>
      <div className={"lamp-list"}>
        {LampArray}
      </div></div>
      {
        withExtra?
        <div>
        <h1>状态:{payload.extra.counter}</h1>
        <h1>控制段:{payload.extra.seg}</h1>
      </div>
        :

        <h1>state:{counter}</h1>
      }
      
      </div>
    );
  }
}

export default App;
