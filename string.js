function string(str,givenChar)
{
    let freq=0;
    for(idx in str)
    {
        let currChar=str.charAt(idx);
        if(currChar=== givenChar)
        {
            console.log(currChar," ",givenChar);
            freq++;
        }

    }
    return freq;
}

let str="Relevel";
let frequency=string(str,'l');
console.log(string);