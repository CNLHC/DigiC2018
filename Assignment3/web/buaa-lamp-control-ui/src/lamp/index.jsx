import React, { Component } from 'react';
import Light from '../img/light.png'
import Dark from '../img/dark.png'
import './index.css'

class LampUnit extends Component {
  render() {
      const lightLamp = <div className={'img-container'}><img src={Light}></img></div>
      const darkLamp = <div className={'img-container'}><img src={Dark}></img></div>

    return (
      <div className="lamp-unit">
      { this.props.light? lightLamp:darkLamp }
      </div>
    );
  }
}

export default LampUnit;
