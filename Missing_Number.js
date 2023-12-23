let TotalNum= 5;
let n = [1,2,3,5];
let sum=0;
let TotalSum = TotalNum * (TotalNum+1)/2;
for(let i=0; i<n.length; i++){
    sum += n[i];
}
let MissingNumber = TotalSum - sum;
console.log(MissingNumber);