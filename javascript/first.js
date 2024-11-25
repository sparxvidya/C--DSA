// let student = {
//     name: "vidyasagar",
//     age:23,
//     ispass: true
// };

// for(key in student){
//     console.log( key , "=", student[key]);
// }

// let jhatus = ["shabes" , "nadeem" ,"anshus","arvind"];


// for(let jhatu of jhatus){
//     console.log(jhatu.toUpperCase());
// }

// let item = [300 ,500,233,455,566];

// for(let i =0; i <item.length;i++)
// {
//     let offer = item[i] / 20;
//     item[i] = item[i]-offer;
    
// }
// console.log(item);

// let arr =[2,3,4,5,5,5];

// arr.forEach((val,arr,idx) => {

//     console.log(val ,idx ,arr);

// });

// let nums = [2,3,4,5,6];

// nums.forEach((num) => {
//     console.log(num*num);

// });

// let newArr = nums.map((val) => {
//  return val * 2;
// });

// console.log(newArr);

// let num =[2,4,5,7,8,10]

//   let evenarr=num.filter((val) => {

//     return val % 2===0;


// });

// console.log(evenarr); 

// let vidya = document.getElementById("vidya");

// console.dir(vidya);



// let para=document.querySelectorAll("p");
// console.dir(para);
let btn1 = document.querySelector("#btn1");

btn1.onclick = () => {
    console.log("button was clicked");

    let a = 25;
    a++;

    console.log(a);
}