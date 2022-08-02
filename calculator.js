function calculator(no1,no2,operation)
{
if(no1==undefined || no2==undefined || operation==undefined)
{
    return "wrong data provided";
}
else
{
    if(operation=='+')
    return no1+no2;
    else if(operation=='-')
    return no1-no2;
    else if(operation=='/')
    return (no1/no2).toFixed(2);
    else if(operation=='*')
    return no1*no2;

}
}
console.log(calculator(4,5,"+"));//9
console.log(calculator(3867,9347,"+"));//1324
console.log(calculator(9,3,"/"));//3
console.log(calculator(3,9,"/"));//0.33
console.log(calculator(56,89,"*"));//4984
console.log(calculator(-5,5,"-"));//-10
console.log(calculator(56,89,"-"));//-33 
