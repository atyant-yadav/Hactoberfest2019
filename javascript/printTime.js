//A simple program to print Time using Javascript

fuction printTime(){
  var d = new Date();
  var hours = d.getHours();
  var mins = d.getMinutes();
  var secs = d.getSeconds();
  document.body.innerHTML = hours + ":" +mins + ":" + secs;
 }
 setInterval(printTime,1000);

