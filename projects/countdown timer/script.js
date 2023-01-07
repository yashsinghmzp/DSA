const enddate ="7 january 2023 10:00 pm";

document.getElementById("enddate").innerText = enddate; //end date is going by this line
const inputs = document.querySelectorAll("input")

function clock(){
    const end = new Date(enddate); //end date is save in end 
    const now = new Date();  //current date save in now 
    const diff = (end-now)/1000;  //give diffrence in second
    if(diff<0) return; // negative value then stop
    inputs[0].value = Math.floor(diff/3600/24); //give days
    inputs[1].value = Math.floor((diff/3600)%24); //give hours
    inputs[2].value = Math.floor((diff/3600)%60); //give minutes
    inputs[3].value = Math.floor(diff%60); //give seconds

    
   
    
}

clock();

setInterval(
    ()=>{
        clock() //per second clock function called
    }
)