function anagram(s1,s2)
{
    return s1.split("").sort().join("") === s2.split("").sort().join("");
}
let st1="b";
let st2='cad';
let result=anagram(st1,st2);
if(anagram)
{
    console.log("true");
}
else{
    console.log("false");
    console.log("false");
}