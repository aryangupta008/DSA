function count(a,sum)
{
    //let sum=0;
    while(a!=0)
    {
        sum+=a%10;
        a=a/10;
    }
   console.log(sum);
}
count(123,0);
//console.log(count);