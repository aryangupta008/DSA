function seq(arr)
{
    let mset=new Set();
    let longestconslength=0;
    for(let i=0;i<arr.length;i++)
    {
        mset.add(arr[i]);
    }
    for(let i=0;i<arr.length;i++)
    {
        let currnumber=arr[i];
        let smallernumber=mset.has(currnumber-1);
        if(!smallernumber)
        {
            let j=currnumber;
            while(mset.has(j))
            {
                j++;
            }
            let lengthseq=j-currnumber;
            longestconslength=lengthseq>longestconslength ? lengthseq:longestconslength;
        }
    }
    return longestconslength;

}
let arr=[10,8,5,3,1,2,11]
console.log(seq(arr));