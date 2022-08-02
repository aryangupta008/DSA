function anagrams(str1,str2)
{
    let freqarr=new Array(26); // we can give the size
    //let freq=[];
    for(let i=0;i<26;i++)
    {
        freqarr[i]=0;
    }
    if(str1.length != str2.length)
    {
        return false;
    }
    for(let i=0;i<str1.length;i++)
    {
        let idz=str1.charCodeAt(i)-'a'.charCodeAt(0);
        console.log(idz);
    }
}
let str1='abc';
let str2='cab';
anagrams(str1,str2);