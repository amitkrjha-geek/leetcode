/**
 * @param {string} s
 * @return {number[]}
 */
var diStringMatch = function(s) {
     const result = [];
  
  let lo = 0;
  let hi = s.length;
  for (let i = 0; i < s.length + 1; i++) {
    result.push(s[i] === 'D' ? hi-- : lo++);
  }
  
  return result;
};