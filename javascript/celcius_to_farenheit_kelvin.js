function calc(){
                var input = document.getElementById("input").value;
                var check = document.getElementById("checkbox_id");

                var fa = 2*(input-(input*0.1))+32;
                var ke = ((input*1) + 273.15);

                if(check.checked == true){
                    fa = fa.toFixed(2);
                    ke = ke.toFixed(2);
                }

                document.getElementById("output1").innerHTML = input + "&#x2103" + " is " + fa + "&#x2109";
                document.getElementById("output2").innerHTML = input + "&#x2103" + " is " + ke + " K ";
               }
