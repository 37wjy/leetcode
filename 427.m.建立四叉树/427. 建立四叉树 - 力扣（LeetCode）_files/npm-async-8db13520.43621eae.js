(window.nojMonomainwebpackJsonpproduction=window.nojMonomainwebpackJsonpproduction||[]).push([[38],{"7NY+":function(t,n,e){t.exports=e("d8ZO").diff_match_patch},d8ZO:function(t,n){function e(){this.Diff_Timeout=1,this.Diff_EditCost=4,this.Match_Threshold=.5,this.Match_Distance=1e3,this.Patch_DeleteThreshold=.5,this.Patch_Margin=4,this.Match_MaxBits=32}var i=-1;e.Diff,e.prototype.diff_main=function(t,n,e,i){"undefined"==typeof i&&(i=this.Diff_Timeout<=0?Number.MAX_VALUE:(new Date).getTime()+1e3*this.Diff_Timeout);var r=i;if(null==t||null==n)throw new Error("Null input. (diff_main)");if(t==n)return t?[[0,t]]:[];"undefined"==typeof e&&(e=!0);var h=e,s=this.diff_commonPrefix(t,n),a=t.substring(0,s);t=t.substring(s),n=n.substring(s),s=this.diff_commonSuffix(t,n);var f=t.substring(t.length-s);t=t.substring(0,t.length-s),n=n.substring(0,n.length-s);var l=this.diff_compute_(t,n,h,r);return a&&l.unshift([0,a]),f&&l.push([0,f]),this.diff_cleanupMerge(l),l},e.prototype.diff_compute_=function(t,n,e,r){var h;if(!t)return[[1,n]];if(!n)return[[i,t]];var s=t.length>n.length?t:n,a=t.length>n.length?n:t,f=s.indexOf(a);if(-1!=f)return h=[[1,s.substring(0,f)],[0,a],[1,s.substring(f+a.length)]],t.length>n.length&&(h[0][0]=h[2][0]=i),h;if(1==a.length)return[[i,t],[1,n]];var l=this.diff_halfMatch_(t,n);if(l){var g=l[0],o=l[1],c=l[2],u=l[3],p=l[4],d=this.diff_main(g,c,e,r),_=this.diff_main(o,u,e,r);return d.concat([[0,p]],_)}return e&&t.length>100&&n.length>100?this.diff_lineMode_(t,n,r):this.diff_bisect_(t,n,r)},e.prototype.diff_lineMode_=function(t,n,e){t=(o=this.diff_linesToChars_(t,n)).chars1,n=o.chars2;var r=o.lineArray,h=this.diff_main(t,n,!1,e);this.diff_charsToLines_(h,r),this.diff_cleanupSemantic(h),h.push([0,""]);for(var s=0,a=0,f=0,l="",g="";s<h.length;){switch(h[s][0]){case 1:f++,g+=h[s][1];break;case i:a++,l+=h[s][1];break;case 0:if(a>=1&&f>=1){h.splice(s-a-f,a+f),s=s-a-f;for(var o,c=(o=this.diff_main(l,g,!1,e)).length-1;c>=0;c--)h.splice(s,0,o[c]);s+=o.length}f=0,a=0,l="",g=""}s++}return h.pop(),h},e.prototype.diff_bisect_=function(t,n,e){for(var r=t.length,h=n.length,s=Math.ceil((r+h)/2),a=s,f=2*s,l=new Array(f),g=new Array(f),o=0;o<f;o++)l[o]=-1,g[o]=-1;l[a+1]=0,g[a+1]=0;for(var c=r-h,u=c%2!=0,p=0,d=0,_=0,b=0,v=0;v<s&&!((new Date).getTime()>e);v++){for(var m=-v+p;m<=v-d;m+=2){for(var M=a+m,x=(D=m==-v||m!=v&&l[M-1]<l[M+1]?l[M+1]:l[M-1]+1)-m;D<r&&x<h&&t.charAt(D)==n.charAt(x);)D++,x++;if(l[M]=D,D>r)d+=2;else if(x>h)p+=2;else if(u){if((k=a+c-m)>=0&&k<f&&-1!=g[k])if(D>=(w=r-g[k]))return this.diff_bisectSplit_(t,n,D,x,e)}}for(var y=-v+_;y<=v-b;y+=2){for(var w,k=a+y,A=(w=y==-v||y!=v&&g[k-1]<g[k+1]?g[k+1]:g[k-1]+1)-y;w<r&&A<h&&t.charAt(r-w-1)==n.charAt(h-A-1);)w++,A++;if(g[k]=w,w>r)b+=2;else if(A>h)_+=2;else if(!u){if((M=a+c-y)>=0&&M<f&&-1!=l[M]){var D;x=a+(D=l[M])-M;if(D>=(w=r-w))return this.diff_bisectSplit_(t,n,D,x,e)}}}}return[[i,t],[1,n]]},e.prototype.diff_bisectSplit_=function(t,n,e,i,r){var h=t.substring(0,e),s=n.substring(0,i),a=t.substring(e),f=n.substring(i),l=this.diff_main(h,s,!1,r),g=this.diff_main(a,f,!1,r);return l.concat(g)},e.prototype.diff_linesToChars_=function(t,n){var e=[],i={};function r(t){for(var n="",r=0,h=-1,s=e.length;h<t.length-1;){-1==(h=t.indexOf("\n",r))&&(h=t.length-1);var a=t.substring(r,h+1);r=h+1,(i.hasOwnProperty?i.hasOwnProperty(a):void 0!==i[a])?n+=String.fromCharCode(i[a]):(n+=String.fromCharCode(s),i[a]=s,e[s++]=a)}return n}return e[0]="",{chars1:r(t),chars2:r(n),lineArray:e}},e.prototype.diff_charsToLines_=function(t,n){for(var e=0;e<t.length;e++){for(var i=t[e][1],r=[],h=0;h<i.length;h++)r[h]=n[i.charCodeAt(h)];t[e][1]=r.join("")}},e.prototype.diff_commonPrefix=function(t,n){if(!t||!n||t.charAt(0)!=n.charAt(0))return 0;for(var e=0,i=Math.min(t.length,n.length),r=i,h=0;e<r;)t.substring(h,r)==n.substring(h,r)?h=e=r:i=r,r=Math.floor((i-e)/2+e);return r},e.prototype.diff_commonSuffix=function(t,n){if(!t||!n||t.charAt(t.length-1)!=n.charAt(n.length-1))return 0;for(var e=0,i=Math.min(t.length,n.length),r=i,h=0;e<r;)t.substring(t.length-r,t.length-h)==n.substring(n.length-r,n.length-h)?h=e=r:i=r,r=Math.floor((i-e)/2+e);return r},e.prototype.diff_commonOverlap_=function(t,n){var e=t.length,i=n.length;if(0==e||0==i)return 0;e>i?t=t.substring(e-i):e<i&&(n=n.substring(0,e));var r=Math.min(e,i);if(t==n)return r;for(var h=0,s=1;;){var a=t.substring(r-s),f=n.indexOf(a);if(-1==f)return h;s+=f,0!=f&&t.substring(r-s)!=n.substring(0,s)||(h=s,s++)}},e.prototype.diff_halfMatch_=function(t,n){if(this.Diff_Timeout<=0)return null;var e=t.length>n.length?t:n,i=t.length>n.length?n:t;if(e.length<4||2*i.length<e.length)return null;var r=this;function h(t,n,e){for(var i,h,s,a,f=t.substring(e,e+Math.floor(t.length/4)),l=-1,g="";-1!=(l=n.indexOf(f,l+1));){var o=r.diff_commonPrefix(t.substring(e),n.substring(l)),c=r.diff_commonSuffix(t.substring(0,e),n.substring(0,l));g.length<c+o&&(g=n.substring(l-c,l)+n.substring(l,l+o),i=t.substring(0,e-c),h=t.substring(e+o),s=n.substring(0,l-c),a=n.substring(l+o))}return 2*g.length>=t.length?[i,h,s,a,g]:null}var s,a,f,l,g,o=h(e,i,Math.ceil(e.length/4)),c=h(e,i,Math.ceil(e.length/2));return o||c?(s=c?o&&o[4].length>c[4].length?o:c:o,t.length>n.length?(a=s[0],f=s[1],l=s[2],g=s[3]):(l=s[0],g=s[1],a=s[2],f=s[3]),[a,f,l,g,s[4]]):null},e.prototype.diff_cleanupSemantic=function(t){for(var n=!1,e=[],r=0,h=null,s=0,a=0,f=0,l=0,g=0;s<t.length;)0==t[s][0]?(e[r++]=s,a=l,f=g,l=0,g=0,h=t[s][1]):(1==t[s][0]?l+=t[s][1].length:g+=t[s][1].length,h&&h.length<=Math.max(a,f)&&h.length<=Math.max(l,g)&&(t.splice(e[r-1],0,[i,h]),t[e[r-1]+1][0]=1,r--,s=--r>0?e[r-1]:-1,a=0,f=0,l=0,g=0,h=null,n=!0)),s++;for(n&&this.diff_cleanupMerge(t),this.diff_cleanupSemanticLossless(t),s=1;s<t.length;){if(t[s-1][0]==i&&1==t[s][0]){var o=t[s-1][1],c=t[s][1],u=this.diff_commonOverlap_(o,c),p=this.diff_commonOverlap_(c,o);u>=p?(u>=o.length/2||u>=c.length/2)&&(t.splice(s,0,[0,c.substring(0,u)]),t[s-1][1]=o.substring(0,o.length-u),t[s+1][1]=c.substring(u),s++):(p>=o.length/2||p>=c.length/2)&&(t.splice(s,0,[0,o.substring(0,p)]),t[s-1][0]=1,t[s-1][1]=c.substring(0,c.length-p),t[s+1][0]=i,t[s+1][1]=o.substring(p),s++),s++}s++}},e.prototype.diff_cleanupSemanticLossless=function(t){function n(t,n){if(!t||!n)return 6;var i=t.charAt(t.length-1),r=n.charAt(0),h=i.match(e.nonAlphaNumericRegex_),s=r.match(e.nonAlphaNumericRegex_),a=h&&i.match(e.whitespaceRegex_),f=s&&r.match(e.whitespaceRegex_),l=a&&i.match(e.linebreakRegex_),g=f&&r.match(e.linebreakRegex_),o=l&&t.match(e.blanklineEndRegex_),c=g&&n.match(e.blanklineStartRegex_);return o||c?5:l||g?4:h&&!a&&f?3:a||f?2:h||s?1:0}for(var i=1;i<t.length-1;){if(0==t[i-1][0]&&0==t[i+1][0]){var r=t[i-1][1],h=t[i][1],s=t[i+1][1],a=this.diff_commonSuffix(r,h);if(a){var f=h.substring(h.length-a);r=r.substring(0,r.length-a),h=f+h.substring(0,h.length-a),s=f+s}for(var l=r,g=h,o=s,c=n(r,h)+n(h,s);h.charAt(0)===s.charAt(0);){r+=h.charAt(0),h=h.substring(1)+s.charAt(0),s=s.substring(1);var u=n(r,h)+n(h,s);u>=c&&(c=u,l=r,g=h,o=s)}t[i-1][1]!=l&&(l?t[i-1][1]=l:(t.splice(i-1,1),i--),t[i][1]=g,o?t[i+1][1]=o:(t.splice(i+1,1),i--))}i++}},e.nonAlphaNumericRegex_=/[^a-zA-Z0-9]/,e.whitespaceRegex_=/\s/,e.linebreakRegex_=/[\r\n]/,e.blanklineEndRegex_=/\n\r?\n$/,e.blanklineStartRegex_=/^\r?\n\r?\n/,e.prototype.diff_cleanupEfficiency=function(t){for(var n=!1,e=[],r=0,h=null,s=0,a=!1,f=!1,l=!1,g=!1;s<t.length;)0==t[s][0]?(t[s][1].length<this.Diff_EditCost&&(l||g)?(e[r++]=s,a=l,f=g,h=t[s][1]):(r=0,h=null),l=g=!1):(t[s][0]==i?g=!0:l=!0,h&&(a&&f&&l&&g||h.length<this.Diff_EditCost/2&&a+f+l+g==3)&&(t.splice(e[r-1],0,[i,h]),t[e[r-1]+1][0]=1,r--,h=null,a&&f?(l=g=!0,r=0):(s=--r>0?e[r-1]:-1,l=g=!1),n=!0)),s++;n&&this.diff_cleanupMerge(t)},e.prototype.diff_cleanupMerge=function(t){t.push([0,""]);for(var n,e=0,r=0,h=0,s="",a="";e<t.length;)switch(t[e][0]){case 1:h++,a+=t[e][1],e++;break;case i:r++,s+=t[e][1],e++;break;case 0:r+h>1?(0!==r&&0!==h&&(0!==(n=this.diff_commonPrefix(a,s))&&(e-r-h>0&&0==t[e-r-h-1][0]?t[e-r-h-1][1]+=a.substring(0,n):(t.splice(0,0,[0,a.substring(0,n)]),e++),a=a.substring(n),s=s.substring(n)),0!==(n=this.diff_commonSuffix(a,s))&&(t[e][1]=a.substring(a.length-n)+t[e][1],a=a.substring(0,a.length-n),s=s.substring(0,s.length-n))),0===r?t.splice(e-h,r+h,[1,a]):0===h?t.splice(e-r,r+h,[i,s]):t.splice(e-r-h,r+h,[i,s],[1,a]),e=e-r-h+(r?1:0)+(h?1:0)+1):0!==e&&0==t[e-1][0]?(t[e-1][1]+=t[e][1],t.splice(e,1)):e++,h=0,r=0,s="",a=""}""===t[t.length-1][1]&&t.pop();var f=!1;for(e=1;e<t.length-1;)0==t[e-1][0]&&0==t[e+1][0]&&(t[e][1].substring(t[e][1].length-t[e-1][1].length)==t[e-1][1]?(t[e][1]=t[e-1][1]+t[e][1].substring(0,t[e][1].length-t[e-1][1].length),t[e+1][1]=t[e-1][1]+t[e+1][1],t.splice(e-1,1),f=!0):t[e][1].substring(0,t[e+1][1].length)==t[e+1][1]&&(t[e-1][1]+=t[e+1][1],t[e][1]=t[e][1].substring(t[e+1][1].length)+t[e+1][1],t.splice(e+1,1),f=!0)),e++;f&&this.diff_cleanupMerge(t)},e.prototype.diff_xIndex=function(t,n){var e,r=0,h=0,s=0,a=0;for(e=0;e<t.length&&(1!==t[e][0]&&(r+=t[e][1].length),t[e][0]!==i&&(h+=t[e][1].length),!(r>n));e++)s=r,a=h;return t.length!=e&&t[e][0]===i?a:a+(n-s)},e.prototype.diff_prettyHtml=function(t){for(var n=[],e=/&/g,r=/</g,h=/>/g,s=/\n/g,a=0;a<t.length;a++){var f=t[a][0],l=t[a][1].replace(e,"&amp;").replace(r,"&lt;").replace(h,"&gt;").replace(s,"&para;<br>");switch(f){case 1:n[a]='<ins style="background:#e6ffe6;">'+l+"</ins>";break;case i:n[a]='<del style="background:#ffe6e6;">'+l+"</del>";break;case 0:n[a]="<span>"+l+"</span>"}}return n.join("")},e.prototype.diff_text1=function(t){for(var n=[],e=0;e<t.length;e++)1!==t[e][0]&&(n[e]=t[e][1]);return n.join("")},e.prototype.diff_text2=function(t){for(var n=[],e=0;e<t.length;e++)t[e][0]!==i&&(n[e]=t[e][1]);return n.join("")},e.prototype.diff_levenshtein=function(t){for(var n=0,e=0,r=0,h=0;h<t.length;h++){var s=t[h][0],a=t[h][1];switch(s){case 1:e+=a.length;break;case i:r+=a.length;break;case 0:n+=Math.max(e,r),e=0,r=0}}return n+=Math.max(e,r)},e.prototype.diff_toDelta=function(t){for(var n=[],e=0;e<t.length;e++)switch(t[e][0]){case 1:n[e]="+"+encodeURI(t[e][1]);break;case i:n[e]="-"+t[e][1].length;break;case 0:n[e]="="+t[e][1].length}return n.join("\t").replace(/%20/g," ")},e.prototype.diff_fromDelta=function(t,n){for(var e=[],r=0,h=0,s=n.split(/\t/g),a=0;a<s.length;a++){var f=s[a].substring(1);switch(s[a].charAt(0)){case"+":try{e[r++]=[1,decodeURI(f)]}catch(t){throw new Error("Illegal escape in diff_fromDelta: "+f)}break;case"-":case"=":var l=parseInt(f,10);if(isNaN(l)||l<0)throw new Error("Invalid number in diff_fromDelta: "+f);var g=t.substring(h,h+=l);"="==s[a].charAt(0)?e[r++]=[0,g]:e[r++]=[i,g];break;default:if(s[a])throw new Error("Invalid diff operation in diff_fromDelta: "+s[a])}}if(h!=t.length)throw new Error("Delta length ("+h+") does not equal source text length ("+t.length+").");return e},e.prototype.match_main=function(t,n,e){if(null==t||null==n||null==e)throw new Error("Null input. (match_main)");return e=Math.max(0,Math.min(e,t.length)),t==n?0:t.length?t.substring(e,e+n.length)==n?e:this.match_bitap_(t,n,e):-1},e.prototype.match_bitap_=function(t,n,e){if(n.length>this.Match_MaxBits)throw new Error("Pattern too long for this browser.");var i=this.match_alphabet_(n),r=this;function h(t,i){var h=t/n.length,s=Math.abs(e-i);return r.Match_Distance?h+s/r.Match_Distance:s?1:h}var s=this.Match_Threshold,a=t.indexOf(n,e);-1!=a&&(s=Math.min(h(0,a),s),-1!=(a=t.lastIndexOf(n,e+n.length))&&(s=Math.min(h(0,a),s)));var f,l,g=1<<n.length-1;a=-1;for(var o,c=n.length+t.length,u=0;u<n.length;u++){for(f=0,l=c;f<l;)h(u,e+l)<=s?f=l:c=l,l=Math.floor((c-f)/2+f);c=l;var p=Math.max(1,e-l+1),d=Math.min(e+l,t.length)+n.length,_=Array(d+2);_[d+1]=(1<<u)-1;for(var b=d;b>=p;b--){var v=i[t.charAt(b-1)];if(_[b]=0===u?(_[b+1]<<1|1)&v:(_[b+1]<<1|1)&v|(o[b+1]|o[b])<<1|1|o[b+1],_[b]&g){var m=h(u,b-1);if(m<=s){if(s=m,!((a=b-1)>e))break;p=Math.max(1,2*e-a)}}}if(h(u+1,e)>s)break;o=_}return a},e.prototype.match_alphabet_=function(t){for(var n={},e=0;e<t.length;e++)n[t.charAt(e)]=0;for(e=0;e<t.length;e++)n[t.charAt(e)]|=1<<t.length-e-1;return n},e.prototype.patch_addContext_=function(t,n){if(0!=n.length){for(var e=n.substring(t.start2,t.start2+t.length1),i=0;n.indexOf(e)!=n.lastIndexOf(e)&&e.length<this.Match_MaxBits-this.Patch_Margin-this.Patch_Margin;)i+=this.Patch_Margin,e=n.substring(t.start2-i,t.start2+t.length1+i);i+=this.Patch_Margin;var r=n.substring(t.start2-i,t.start2);r&&t.diffs.unshift([0,r]);var h=n.substring(t.start2+t.length1,t.start2+t.length1+i);h&&t.diffs.push([0,h]),t.start1-=r.length,t.start2-=r.length,t.length1+=r.length+h.length,t.length2+=r.length+h.length}},e.prototype.patch_make=function(t,n,r){var h,s;if("string"==typeof t&&"string"==typeof n&&"undefined"==typeof r)h=t,(s=this.diff_main(h,n,!0)).length>2&&(this.diff_cleanupSemantic(s),this.diff_cleanupEfficiency(s));else if(t&&"object"==typeof t&&"undefined"==typeof n&&"undefined"==typeof r)s=t,h=this.diff_text1(s);else if("string"==typeof t&&n&&"object"==typeof n&&"undefined"==typeof r)h=t,s=n;else{if("string"!=typeof t||"string"!=typeof n||!r||"object"!=typeof r)throw new Error("Unknown call format to patch_make.");h=t,s=r}if(0===s.length)return[];for(var a=[],f=new e.patch_obj,l=0,g=0,o=0,c=h,u=h,p=0;p<s.length;p++){var d=s[p][0],_=s[p][1];switch(l||0===d||(f.start1=g,f.start2=o),d){case 1:f.diffs[l++]=s[p],f.length2+=_.length,u=u.substring(0,o)+_+u.substring(o);break;case i:f.length1+=_.length,f.diffs[l++]=s[p],u=u.substring(0,o)+u.substring(o+_.length);break;case 0:_.length<=2*this.Patch_Margin&&l&&s.length!=p+1?(f.diffs[l++]=s[p],f.length1+=_.length,f.length2+=_.length):_.length>=2*this.Patch_Margin&&l&&(this.patch_addContext_(f,c),a.push(f),f=new e.patch_obj,l=0,c=u,g=o)}1!==d&&(g+=_.length),d!==i&&(o+=_.length)}return l&&(this.patch_addContext_(f,c),a.push(f)),a},e.prototype.patch_deepCopy=function(t){for(var n=[],i=0;i<t.length;i++){var r=t[i],h=new e.patch_obj;h.diffs=[];for(var s=0;s<r.diffs.length;s++)h.diffs[s]=r.diffs[s].slice();h.start1=r.start1,h.start2=r.start2,h.length1=r.length1,h.length2=r.length2,n[i]=h}return n},e.prototype.patch_apply=function(t,n){if(0==t.length)return[n,[]];t=this.patch_deepCopy(t);var e=this.patch_addPadding(t);n=e+n+e,this.patch_splitMax(t);for(var r=0,h=[],s=0;s<t.length;s++){var a,f,l=t[s].start2+r,g=this.diff_text1(t[s].diffs),o=-1;if(g.length>this.Match_MaxBits?-1!=(a=this.match_main(n,g.substring(0,this.Match_MaxBits),l))&&(-1==(o=this.match_main(n,g.substring(g.length-this.Match_MaxBits),l+g.length-this.Match_MaxBits))||a>=o)&&(a=-1):a=this.match_main(n,g,l),-1==a)h[s]=!1,r-=t[s].length2-t[s].length1;else if(h[s]=!0,r=a-l,g==(f=-1==o?n.substring(a,a+g.length):n.substring(a,o+this.Match_MaxBits)))n=n.substring(0,a)+this.diff_text2(t[s].diffs)+n.substring(a+g.length);else{var c=this.diff_main(g,f,!1);if(g.length>this.Match_MaxBits&&this.diff_levenshtein(c)/g.length>this.Patch_DeleteThreshold)h[s]=!1;else{this.diff_cleanupSemanticLossless(c);for(var u,p=0,d=0;d<t[s].diffs.length;d++){var _=t[s].diffs[d];0!==_[0]&&(u=this.diff_xIndex(c,p)),1===_[0]?n=n.substring(0,a+u)+_[1]+n.substring(a+u):_[0]===i&&(n=n.substring(0,a+u)+n.substring(a+this.diff_xIndex(c,p+_[1].length))),_[0]!==i&&(p+=_[1].length)}}}}return[n=n.substring(e.length,n.length-e.length),h]},e.prototype.patch_addPadding=function(t){for(var n=this.Patch_Margin,e="",i=1;i<=n;i++)e+=String.fromCharCode(i);for(i=0;i<t.length;i++)t[i].start1+=n,t[i].start2+=n;var r=t[0],h=r.diffs;if(0==h.length||0!=h[0][0])h.unshift([0,e]),r.start1-=n,r.start2-=n,r.length1+=n,r.length2+=n;else if(n>h[0][1].length){var s=n-h[0][1].length;h[0][1]=e.substring(h[0][1].length)+h[0][1],r.start1-=s,r.start2-=s,r.length1+=s,r.length2+=s}if(0==(h=(r=t[t.length-1]).diffs).length||0!=h[h.length-1][0])h.push([0,e]),r.length1+=n,r.length2+=n;else if(n>h[h.length-1][1].length){s=n-h[h.length-1][1].length;h[h.length-1][1]+=e.substring(0,s),r.length1+=s,r.length2+=s}return e},e.prototype.patch_splitMax=function(t){for(var n=this.Match_MaxBits,r=0;r<t.length;r++)if(!(t[r].length1<=n)){var h=t[r];t.splice(r--,1);for(var s=h.start1,a=h.start2,f="";0!==h.diffs.length;){var l=new e.patch_obj,g=!0;for(l.start1=s-f.length,l.start2=a-f.length,""!==f&&(l.length1=l.length2=f.length,l.diffs.push([0,f]));0!==h.diffs.length&&l.length1<n-this.Patch_Margin;){var o=h.diffs[0][0],c=h.diffs[0][1];1===o?(l.length2+=c.length,a+=c.length,l.diffs.push(h.diffs.shift()),g=!1):o===i&&1==l.diffs.length&&0==l.diffs[0][0]&&c.length>2*n?(l.length1+=c.length,s+=c.length,g=!1,l.diffs.push([o,c]),h.diffs.shift()):(c=c.substring(0,n-l.length1-this.Patch_Margin),l.length1+=c.length,s+=c.length,0===o?(l.length2+=c.length,a+=c.length):g=!1,l.diffs.push([o,c]),c==h.diffs[0][1]?h.diffs.shift():h.diffs[0][1]=h.diffs[0][1].substring(c.length))}f=(f=this.diff_text2(l.diffs)).substring(f.length-this.Patch_Margin);var u=this.diff_text1(h.diffs).substring(0,this.Patch_Margin);""!==u&&(l.length1+=u.length,l.length2+=u.length,0!==l.diffs.length&&0===l.diffs[l.diffs.length-1][0]?l.diffs[l.diffs.length-1][1]+=u:l.diffs.push([0,u])),g||t.splice(++r,0,l)}}},e.prototype.patch_toText=function(t){for(var n=[],e=0;e<t.length;e++)n[e]=t[e];return n.join("")},e.prototype.patch_fromText=function(t){var n=[];if(!t)return n;for(var r=t.split("\n"),h=0,s=/^@@ -(\d+),?(\d*) \+(\d+),?(\d*) @@$/;h<r.length;){var a=r[h].match(s);if(!a)throw new Error("Invalid patch string: "+r[h]);var f=new e.patch_obj;for(n.push(f),f.start1=parseInt(a[1],10),""===a[2]?(f.start1--,f.length1=1):"0"==a[2]?f.length1=0:(f.start1--,f.length1=parseInt(a[2],10)),f.start2=parseInt(a[3],10),""===a[4]?(f.start2--,f.length2=1):"0"==a[4]?f.length2=0:(f.start2--,f.length2=parseInt(a[4],10)),h++;h<r.length;){var l=r[h].charAt(0);try{var g=decodeURI(r[h].substring(1))}catch(t){throw new Error("Illegal escape in patch_fromText: "+g)}if("-"==l)f.diffs.push([i,g]);else if("+"==l)f.diffs.push([1,g]);else if(" "==l)f.diffs.push([0,g]);else{if("@"==l)break;if(""!==l)throw new Error('Invalid patch mode "'+l+'" in: '+g)}h++}}return n},e.patch_obj=function(){this.diffs=[],this.start1=null,this.start2=null,this.length1=0,this.length2=0},e.patch_obj.prototype.toString=function(){for(var t,n=["@@ -"+(0===this.length1?this.start1+",0":1==this.length1?this.start1+1:this.start1+1+","+this.length1)+" +"+(0===this.length2?this.start2+",0":1==this.length2?this.start2+1:this.start2+1+","+this.length2)+" @@\n"],e=0;e<this.diffs.length;e++){switch(this.diffs[e][0]){case 1:t="+";break;case i:t="-";break;case 0:t=" "}n[e+1]=t+encodeURI(this.diffs[e][1])+"\n"}return n.join("").replace(/%20/g," ")},this.diff_match_patch=e,this.DIFF_DELETE=i,this.DIFF_INSERT=1,this.DIFF_EQUAL=0}}]);