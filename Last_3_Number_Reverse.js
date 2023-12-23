let num = 123456;
let f = Math.floor(num/1000);
let remainder=0;
console.log("Orignal number is: " + num);
while(num>999){
    // console.log(num);
    remainder = num % 10;
    f = f * 10 + remainder;
    num = Math.floor(num/10);
}
console.log("Reverse number is: " + f);