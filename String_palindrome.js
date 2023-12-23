let str = "madam";
let i=0,j=str.length-1;
let flag=0;
while(i<j){
    if(str[i]!=str[j]){
        flag++;
        break;
    }
    i++,j--;
}
if(flag==0){
    console.log("Palindrome");
}
else console.log("Not Palindrome");