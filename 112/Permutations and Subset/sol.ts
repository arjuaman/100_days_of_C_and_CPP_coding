function checkInclusion(s1: string, s2: string): boolean {
    if(s1.length>s2.length) return false;
    // if(s1.length===s2.length && s1!=s2) return false;
    if(s1===s2) return true;
    
    let mask = charFreq(s1);
    mask = Object.keys(mask).sort().reduce((a, c) => (a[c] = mask[c], a), {});
    
    for(let i=0;i<(s2.length-s1.length+1);i++){
        let sDash:string = "";
        for(let j=i;j<s1.length+i;j++){
            sDash += s2[j];
        }
     
        let temp = charFreq(sDash);
        temp = Object.keys(temp).sort().reduce((a, c) => (a[c] = temp[c], a), {});
        
        if(JSON.stringify(temp) === JSON.stringify(mask) ) return true;
    }
    
    return false;
};

function charFreq( s:string ):{} {
    let array_lengths = {}; // object

    // compute frequencies of each value
    for(var i = 0; i < s.length; i++) {
        let value = s[i];
        if(value in array_lengths) {
            array_lengths[value]++;
        } else {
            array_lengths[value] = 1;
        }
    }
    return array_lengths;
}