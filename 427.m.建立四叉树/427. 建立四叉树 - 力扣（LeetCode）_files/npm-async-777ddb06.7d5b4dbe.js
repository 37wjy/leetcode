(window.nojMonomainwebpackJsonpproduction=window.nojMonomainwebpackJsonpproduction||[]).push([[22],{TqoN:function(n,t,e){"use strict";function o(n){return(o="function"===typeof Symbol&&"symbol"===typeof Symbol.iterator?function(n){return typeof n}:function(n){return n&&"function"===typeof Symbol&&n.constructor===Symbol&&n!==Symbol.prototype?"symbol":typeof n})(n)}e.d(t,"a",(function(){return g}));"function"===typeof Symbol&&Symbol.iterator,"function"===typeof Symbol&&Symbol.asyncIterator;var r="function"===typeof Symbol?Symbol.toStringTag:"@@toStringTag";function u(n,t){for(var e,o=/\r\n|[\n\r]/g,r=1,u=t+1;(e=o.exec(n.body))&&e.index<t;)r+=1,u=t+1-(e.index+e[0].length);return{line:r,column:u}}function c(n){return i(n.source,u(n.source,n.start))}function i(n,t){var e=n.locationOffset.column-1,o=a(e)+n.body,r=t.line-1,u=n.locationOffset.line-1,c=t.line+u,i=1===t.line?e:0,f=t.column+i,s="".concat(n.name,":").concat(c,":").concat(f,"\n"),p=o.split(/\r\n|[\n\r]/g),y=p[r];if(y.length>120){for(var v=Math.floor(f/80),b=f%80,d=[],m=0;m<y.length;m+=80)d.push(y.slice(m,m+80));return s+l([["".concat(c),d[0]]].concat(d.slice(1,v+1).map((function(n){return["",n]})),[[" ",a(b-1)+"^"],["",d[v+1]]]))}return s+l([["".concat(c-1),p[r-1]],["".concat(c),y],["",a(f-1)+"^"],["".concat(c+1),p[r+1]]])}function l(n){var t=n.filter((function(n){n[0];return void 0!==n[1]})),e=Math.max.apply(Math,t.map((function(n){return n[0].length})));return t.map((function(n){var t,o=n[0],r=n[1];return a(e-(t=o).length)+t+(r?" | "+r:" |")})).join("\n")}function a(n){return Array(n+1).join(" ")}function f(n){return(f="function"===typeof Symbol&&"symbol"===typeof Symbol.iterator?function(n){return typeof n}:function(n){return n&&"function"===typeof Symbol&&n.constructor===Symbol&&n!==Symbol.prototype?"symbol":typeof n})(n)}function s(n,t){for(var e=0;e<t.length;e++){var o=t[e];o.enumerable=o.enumerable||!1,o.configurable=!0,"value"in o&&(o.writable=!0),Object.defineProperty(n,o.key,o)}}function p(n,t){return!t||"object"!==f(t)&&"function"!==typeof t?y(n):t}function y(n){if(void 0===n)throw new ReferenceError("this hasn't been initialised - super() hasn't been called");return n}function v(n){var t="function"===typeof Map?new Map:void 0;return(v=function(n){if(null===n||(e=n,-1===Function.toString.call(e).indexOf("[native code]")))return n;var e;if("function"!==typeof n)throw new TypeError("Super expression must either be null or a function");if("undefined"!==typeof t){if(t.has(n))return t.get(n);t.set(n,o)}function o(){return b(n,arguments,h(this).constructor)}return o.prototype=Object.create(n.prototype,{constructor:{value:o,enumerable:!1,writable:!0,configurable:!0}}),m(o,n)})(n)}function b(n,t,e){return(b=d()?Reflect.construct:function(n,t,e){var o=[null];o.push.apply(o,t);var r=new(Function.bind.apply(n,o));return e&&m(r,e.prototype),r}).apply(null,arguments)}function d(){if("undefined"===typeof Reflect||!Reflect.construct)return!1;if(Reflect.construct.sham)return!1;if("function"===typeof Proxy)return!0;try{return Date.prototype.toString.call(Reflect.construct(Date,[],(function(){}))),!0}catch(n){return!1}}function m(n,t){return(m=Object.setPrototypeOf||function(n,t){return n.__proto__=t,n})(n,t)}function h(n){return(h=Object.setPrototypeOf?Object.getPrototypeOf:function(n){return n.__proto__||Object.getPrototypeOf(n)})(n)}var g=function(n){!function(n,t){if("function"!==typeof t&&null!==t)throw new TypeError("Super expression must either be null or a function");n.prototype=Object.create(t&&t.prototype,{constructor:{value:n,writable:!0,configurable:!0}}),t&&m(n,t)}(b,n);var t,e,l,a,f,v=(t=b,e=d(),function(){var n,o=h(t);if(e){var r=h(this).constructor;n=Reflect.construct(o,arguments,r)}else n=o.apply(this,arguments);return p(this,n)});function b(n,t,e,r,c,i,l){var a,f,s,d,m;!function(n,t){if(!(n instanceof t))throw new TypeError("Cannot call a class as a function")}(this,b),m=v.call(this,n);var h,g=Array.isArray(t)?0!==t.length?t:void 0:t?[t]:void 0,S=e;!S&&g&&(S=null===(h=g[0].loc)||void 0===h?void 0:h.source);var w,O=r;!O&&g&&(O=g.reduce((function(n,t){return t.loc&&n.push(t.loc.start),n}),[])),O&&0===O.length&&(O=void 0),r&&e?w=r.map((function(n){return u(e,n)})):g&&(w=g.reduce((function(n,t){return t.loc&&n.push(u(t.loc.source,t.loc.start)),n}),[]));var j,k=l;if(null==k&&null!=i){var x=i.extensions;"object"==o(j=x)&&null!==j&&(k=x)}return Object.defineProperties(y(m),{name:{value:"GraphQLError"},message:{value:n,enumerable:!0,writable:!0},locations:{value:null!==(a=w)&&void 0!==a?a:void 0,enumerable:null!=w},path:{value:null!==c&&void 0!==c?c:void 0,enumerable:null!=c},nodes:{value:null!==g&&void 0!==g?g:void 0},source:{value:null!==(f=S)&&void 0!==f?f:void 0},positions:{value:null!==(s=O)&&void 0!==s?s:void 0},originalError:{value:i},extensions:{value:null!==(d=k)&&void 0!==d?d:void 0,enumerable:null!=k}}),(null===i||void 0===i?void 0:i.stack)?(Object.defineProperty(y(m),"stack",{value:i.stack,writable:!0,configurable:!0}),p(m)):(Error.captureStackTrace?Error.captureStackTrace(y(m),b):Object.defineProperty(y(m),"stack",{value:Error().stack,writable:!0,configurable:!0}),m)}return l=b,(a=[{key:"toString",value:function(){return function(n){var t=n.message;if(n.nodes)for(var e=0,o=n.nodes;e<o.length;e++){var r=o[e];r.loc&&(t+="\n\n"+c(r.loc))}else if(n.source&&n.locations)for(var u=0,l=n.locations;u<l.length;u++){var a=l[u];t+="\n\n"+i(n.source,a)}return t}(this)}},{key:r,get:function(){return"Object"}}])&&s(l.prototype,a),f&&s(l,f),b}(v(Error))}}]);