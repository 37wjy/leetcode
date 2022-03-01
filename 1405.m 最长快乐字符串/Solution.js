/**
 * @param {number} a
 * @param {number} b
 * @param {number} c
 * @return {string}
 */
var longestDiverseString = function(a, b, c) {
    const res = [];
    const arr = [[a, 'a'], [b, 'b'], [c, 'c']];
    
    while (true) {
        arr.sort((l, r) => r[0] - l[0]);
        let hasNext = false;
        for (const [i, [cnt, char]] of arr.entries()) {
            if (cnt <= 0) {
                break;
            }
            const m = res.length;
            if (m >= 2 && res[m - 2] === char && res[m - 1] === char) {
                continue;
            }
            hasNext = true;
            res.push(char);
            arr[i][0]--;
            break;
        }
        if (!hasNext) {
            break;
        }
    }
    
    return res.join('');
};

console.log(longestDiverseString(1,1,7));