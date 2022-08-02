let k=5;
let r=3;
function factorial(n)
{
    let fact=1;
    for(var i=1;i<=n;i++)
    {
        fact=fact*i;
    }
     return fact;
}

let ncr=factorial(k)/(factorial(r)*factorial(k-r));
console.log(ncr);