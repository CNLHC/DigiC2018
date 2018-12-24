
from django.urls import path
from serialbridge.views import boardData

urlpatterns = [
    path('data/',boardData),
    


]
