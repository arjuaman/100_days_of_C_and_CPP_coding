function checkInclusion(s1: string, s2: string): boolean {
    let all_perm:string[] = [];
    let sDash = new Set();  
    permutations(s1,0,s1.length,all_perm);
    for(let i=0;i<all_perm.length;i++){
        sDash.add(all_perm[i]);
    }
    // console.log(sDash);
    for(let word of sDash){
        let x = <string>word;
        if(s2.includes(x))
            return true;
    }
    return false;
};

function permutations(s:string, l:number, r:number, ans:string[]):void{
    if(l==r){
        ans.push(s);
        return;
    }
    for(let i=l;i<r;i++){
        
        // let sDash = [...s]; // convert into array
        // [sDash[l],sDash[i]]=[sDash[i],sDash[l]];; // alter array
        // s = sDash.join(); // convert back into string
        
        // [s[l],s[i]]=[s[i],s[l]];
        s = swap(s,l,i);
        permutations(s,l+1,r,ans);
        s = swap(s,l,i);
        // [s[l],s[i]]=[s[i],s[l]];
        
        // let sDash2 = [...s]; // convert into array
        // [sDash2[l],sDash2[i]]=[sDash2[i],sDash2[l]];; // alter array
        // s = sDash2.join(); // convert back into string
    }
}

function swap(a:string, i:number, j:number){
    let temp;
    let charArray = a.split("");
    temp = charArray[i] ;
    charArray[i] = charArray[j];
    charArray[j] = temp;
    return (charArray).join("");
}