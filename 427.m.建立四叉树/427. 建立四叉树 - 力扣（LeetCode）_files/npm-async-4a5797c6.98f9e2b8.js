(window.nojMonomainwebpackJsonpproduction=window.nojMonomainwebpackJsonpproduction||[]).push([[63],{Nq7K:function(e,t,i){var o=i("LMF0");o.commands.tabAndIndentMarkdownList=function(e){var t=e.listSelections()[0].head;if(!1!==e.getStateAfter(t.line).list)e.execCommand("indentMore");else if(e.options.indentWithTabs)e.execCommand("insertTab");else{var i=Array(e.options.tabSize+1).join(" ");e.replaceSelection(i)}},o.commands.shiftTabAndUnindentMarkdownList=function(e){var t=e.listSelections()[0].head;if(!1!==e.getStateAfter(t.line).list)e.execCommand("indentLess");else if(e.options.indentWithTabs)e.execCommand("insertTab");else{var i=Array(e.options.tabSize+1).join(" ");e.replaceSelection(i)}}},yTgS:function(e,t,i){"use strict";var o=i("LMF0");i("uBFH"),i("Nq7K"),i("E7Qu"),i("plpq"),i("DwRM"),i("XPyq"),i("Zu/S"),i("PnoS"),i("s89s"),i("choO");var a=i("zi42"),n=i("gNrm"),r=/Mac/.test(navigator.platform),s=new RegExp(/(<a.*?https?:\/\/.*?[^a]>)+?/g),l={toggleBold:b,toggleItalic:y,drawLink:B,toggleHeadingSmaller:k,toggleHeadingBigger:N,drawImage:M,toggleBlockquote:C,toggleOrderedList:L,toggleUnorderedList:E,toggleCodeBlock:S,togglePreview:D,toggleStrikethrough:w,toggleHeading1:T,toggleHeading2:x,toggleHeading3:I,cleanBlock:H,drawTable:A,drawHorizontalRule:F,undo:z,redo:O,toggleSideBySide:q,toggleFullScreen:v},c={toggleBold:"Cmd-B",toggleItalic:"Cmd-I",drawLink:"Cmd-K",toggleHeadingSmaller:"Cmd-H",toggleHeadingBigger:"Shift-Cmd-H",cleanBlock:"Cmd-E",drawImage:"Cmd-Alt-I",toggleBlockquote:"Cmd-'",toggleOrderedList:"Cmd-Alt-L",toggleUnorderedList:"Cmd-L",toggleCodeBlock:"Cmd-Alt-C",togglePreview:"Cmd-P",toggleSideBySide:"F9",toggleFullScreen:"F11"},d=function(){var e,t=!1;return e=navigator.userAgent||navigator.vendor||window.opera,(/(android|bb\d+|meego).+mobile|avantgo|bada\/|blackberry|blazer|compal|elaine|fennec|hiptop|iemobile|ip(hone|od)|iris|kindle|lge |maemo|midp|mmp|mobile.+firefox|netfront|opera m(ob|in)i|palm( os)?|phone|p(ixi|re)\/|plucker|pocket|psp|series(4|6)0|symbian|treo|up\.(browser|link)|vodafone|wap|windows ce|xda|xiino|android|ipad|playbook|silk/i.test(e)||/1207|6310|6590|3gso|4thp|50[1-6]i|770s|802s|a wa|abac|ac(er|oo|s-)|ai(ko|rn)|al(av|ca|co)|amoi|an(ex|ny|yw)|aptu|ar(ch|go)|as(te|us)|attw|au(di|-m|r |s )|avan|be(ck|ll|nq)|bi(lb|rd)|bl(ac|az)|br(e|v)w|bumb|bw-(n|u)|c55\/|capi|ccwa|cdm-|cell|chtm|cldc|cmd-|co(mp|nd)|craw|da(it|ll|ng)|dbte|dc-s|devi|dica|dmob|do(c|p)o|ds(12|-d)|el(49|ai)|em(l2|ul)|er(ic|k0)|esl8|ez([4-7]0|os|wa|ze)|fetc|fly(-|_)|g1 u|g560|gene|gf-5|g-mo|go(\.w|od)|gr(ad|un)|haie|hcit|hd-(m|p|t)|hei-|hi(pt|ta)|hp( i|ip)|hs-c|ht(c(-| |_|a|g|p|s|t)|tp)|hu(aw|tc)|i-(20|go|ma)|i230|iac( |-|\/)|ibro|idea|ig01|ikom|im1k|inno|ipaq|iris|ja(t|v)a|jbro|jemu|jigs|kddi|keji|kgt( |\/)|klon|kpt |kwc-|kyo(c|k)|le(no|xi)|lg( g|\/(k|l|u)|50|54|-[a-w])|libw|lynx|m1-w|m3ga|m50\/|ma(te|ui|xo)|mc(01|21|ca)|m-cr|me(rc|ri)|mi(o8|oa|ts)|mmef|mo(01|02|bi|de|do|t(-| |o|v)|zz)|mt(50|p1|v )|mwbp|mywa|n10[0-2]|n20[2-3]|n30(0|2)|n50(0|2|5)|n7(0(0|1)|10)|ne((c|m)-|on|tf|wf|wg|wt)|nok(6|i)|nzph|o2im|op(ti|wv)|oran|owg1|p800|pan(a|d|t)|pdxg|pg(13|-([1-8]|c))|phil|pire|pl(ay|uc)|pn-2|po(ck|rt|se)|prox|psio|pt-g|qa-a|qc(07|12|21|32|60|-[2-7]|i-)|qtek|r380|r600|raks|rim9|ro(ve|zo)|s55\/|sa(ge|ma|mm|ms|ny|va)|sc(01|h-|oo|p-)|sdk\/|se(c(-|0|1)|47|mc|nd|ri)|sgh-|shar|sie(-|m)|sk-0|sl(45|id)|sm(al|ar|b3|it|t5)|so(ft|ny)|sp(01|h-|v-|v )|sy(01|mb)|t2(18|50)|t6(00|10|18)|ta(gt|lk)|tcl-|tdg-|tel(i|m)|tim-|t-mo|to(pl|sh)|ts(70|m-|m3|m5)|tx-9|up(\.b|g1|si)|utst|v400|v750|veri|vi(rg|te)|vk(40|5[0-3]|-v)|vm40|voda|vulc|vx(52|53|60|61|70|80|81|83|85|98)|w3c(-| )|webc|whit|wi(g |nc|nw)|wmlb|wonu|x700|yas-|your|zeto|zte-/i.test(e.substr(0,4)))&&(t=!0),t};function u(e){return e=r?e.replace("Ctrl","Cmd"):e.replace("Cmd","Ctrl")}function p(e,t,i,o){var a=g(e,!1,t,i,"button",o);a.className+=" easymde-dropdown";var n=document.createElement("div");n.className="easymde-dropdown-content";for(var r=0;r<e.children.length;r++){var s,l=e.children[r];s=g("string"===typeof l&&l in K?K[l]:l,!0,t,i,"button",o),n.appendChild(s)}return a.appendChild(n),a}function g(e,t,i,o,a,n){e=e||{};var s=document.createElement(a);s.className=e.name,s.setAttribute("type",a),i=void 0==i||i,e.name&&e.name in o&&(l[e.name]=e.action),e.title&&i&&(s.title=function(e,t,i){var o,a=e;t&&i[o=function(e){for(var t in l)if(l[t]===e)return t;return null}(t)]&&(a+=" ("+u(i[o])+")");return a}(e.title,e.action,o),r&&(s.title=s.title.replace("Ctrl","\u2318"),s.title=s.title.replace("Alt","\u2325"))),e.noDisable&&s.classList.add("no-disable"),e.noMobile&&s.classList.add("no-mobile");var c=[];"undefined"!==typeof e.className&&(c=e.className.split(" "));for(var d=[],p=0;p<c.length;p++){var g=c[p];g.match(/^fa([srlb]|(-[\w-]*)|$)/)?d.push(g):s.classList.add(g)}s.tabIndex=-1;for(var m=document.createElement("i"),f=0;f<d.length;f++){var h=d[f];m.classList.add(h)}return s.appendChild(m),"undefined"!==typeof e.icon&&(s.innerHTML=e.icon),e.action&&t&&("function"===typeof e.action?s.onclick=function(t){t.preventDefault(),e.action(n)}:"string"===typeof e.action&&(s.onclick=function(t){t.preventDefault(),window.open(e.action,"_blank")})),s}function m(){var e=document.createElement("i");return e.className="separator",e.innerHTML="|",e}function f(e,t){t=t||e.getCursor("start");var i=e.getTokenAt(t);if(!i.type)return{};for(var o,a,n=i.type.split(" "),r={},s=0;s<n.length;s++)"strong"===(o=n[s])?r.bold=!0:"variable-2"===o?(a=e.getLine(t.line),/^\s*\d+\.\s/.test(a)?r["ordered-list"]=!0:r["unordered-list"]=!0):"atom"===o?r.quote=!0:"em"===o?r.italic=!0:"quote"===o?r.quote=!0:"strikethrough"===o?r.strikethrough=!0:"comment"===o?r.code=!0:"link"===o?r.link=!0:"tag"===o?r.image=!0:o.match(/^header(-[1-6])?$/)&&(r[o.replace("header","heading")]=!0);return r}var h="";function v(e){var t=e.codemirror;t.setOption("fullScreen",!t.getOption("fullScreen")),t.getOption("fullScreen")?(h=document.body.style.overflow,document.body.style.overflow="hidden"):document.body.style.overflow=h;var i=t.getWrapperElement();if(/fullscreen/.test(i.previousSibling.className)?i.previousSibling.className=i.previousSibling.className.replace(/\s*fullscreen\b/,""):i.previousSibling.className+=" fullscreen",e.toolbarElements&&e.toolbarElements.fullscreen){var o=e.toolbarElements.fullscreen;/active/.test(o.className)?o.className=o.className.replace(/\s*active\s*/g,""):o.className+=" active"}var a=t.getWrapperElement().nextSibling;/editor-preview-active-side/.test(a.className)&&q(e),e.options.onToggleFullScreen&&e.options.onToggleFullScreen(t.getOption("fullScreen")||!1)}function b(e){P(e,"bold",e.options.blockStyles.bold)}function y(e){P(e,"italic",e.options.blockStyles.italic)}function w(e){P(e,"strikethrough","~~")}function S(e){var t=e.options.blockStyles.code;function i(e){if("object"!==typeof e)throw"fencing_line() takes a 'line' object (not a line number, or line text).  Got: "+typeof e+": "+e;return e.styles&&e.styles[2]&&-1!==e.styles[2].indexOf("formatting-code-block")}function o(e){return e.state.base.base||e.state.base}function a(e,t,a,n,r){a=a||e.getLineHandle(t),n=n||e.getTokenAt({line:t,ch:1}),r=r||!!a.text&&e.getTokenAt({line:t,ch:a.text.length-1});var s=n.type?n.type.split(" "):[];return r&&o(r).indentedCode?"indented":-1!==s.indexOf("comment")&&(o(n).fencedChars||o(r).fencedChars||i(a)?"fenced":"single")}var n,r,s,l=e.codemirror,c=l.getCursor("start"),d=l.getCursor("end"),u=l.getTokenAt({line:c.line,ch:c.ch||1}),p=l.getLineHandle(c.line),g=a(l,c.line,p,u);if("single"===g){var m=p.text.slice(0,c.ch).replace("`",""),f=p.text.slice(c.ch).replace("`","");l.replaceRange(m+f,{line:c.line,ch:0},{line:c.line,ch:99999999999999}),c.ch--,c!==d&&d.ch--,l.setSelection(c,d),l.focus()}else if("fenced"===g)if(c.line!==d.line||c.ch!==d.ch){for(n=c.line;n>=0&&!i(p=l.getLineHandle(n));n--);var h,v,b,y,w=o(l.getTokenAt({line:n,ch:1})).fencedChars;i(l.getLineHandle(c.line))?(h="",v=c.line):i(l.getLineHandle(c.line-1))?(h="",v=c.line-1):(h=w+"\n",v=c.line),i(l.getLineHandle(d.line))?(b="",y=d.line,0===d.ch&&(y+=1)):0!==d.ch&&i(l.getLineHandle(d.line+1))?(b="",y=d.line+1):(b=w+"\n",y=d.line+1),0===d.ch&&(y-=1),l.operation((function(){l.replaceRange(b,{line:y,ch:0},{line:y+(b?0:1),ch:0}),l.replaceRange(h,{line:v,ch:0},{line:v+(h?0:1),ch:0})})),l.setSelection({line:v+(h?1:0),ch:0},{line:y+(h?1:-1),ch:0}),l.focus()}else{var S=c.line;if(i(l.getLineHandle(c.line))&&("fenced"===a(l,c.line+1)?(n=c.line,S=c.line+1):(r=c.line,S=c.line-1)),void 0===n)for(n=S;n>=0&&!i(p=l.getLineHandle(n));n--);if(void 0===r)for(s=l.lineCount(),r=S;r<s&&!i(p=l.getLineHandle(r));r++);l.operation((function(){l.replaceRange("",{line:n,ch:0},{line:n+1,ch:0}),l.replaceRange("",{line:r-1,ch:0},{line:r,ch:0})})),l.focus()}else if("indented"===g){if(c.line!==d.line||c.ch!==d.ch)n=c.line,r=d.line,0===d.ch&&r--;else{for(n=c.line;n>=0;n--)if(!(p=l.getLineHandle(n)).text.match(/^\s*$/)&&"indented"!==a(l,n,p)){n+=1;break}for(s=l.lineCount(),r=c.line;r<s;r++)if(!(p=l.getLineHandle(r)).text.match(/^\s*$/)&&"indented"!==a(l,r,p)){r-=1;break}}var C=l.getLineHandle(r+1),k=C&&l.getTokenAt({line:r+1,ch:C.text.length-1});k&&o(k).indentedCode&&l.replaceRange("\n",{line:r+1,ch:0});for(var N=n;N<=r;N++)l.indentLine(N,"subtract");l.focus()}else{var T=c.line===d.line&&c.ch===d.ch&&0===c.ch,x=c.line!==d.line;T||x?function(e,t,i,o){var a=t.line+1,n=i.line+1,r=t.line!==i.line,s=o+"\n",l="\n"+o;r&&n++,r&&0===i.ch&&(l=o+"\n",n--),U(e,!1,[s,l]),e.setSelection({line:a,ch:0},{line:n,ch:0})}(l,c,d,t):U(l,!1,["`","`"])}}function C(e){j(e.codemirror,"quote")}function k(e){R(e.codemirror,"smaller")}function N(e){R(e.codemirror,"bigger")}function T(e){R(e.codemirror,void 0,1)}function x(e){R(e.codemirror,void 0,2)}function I(e){R(e.codemirror,void 0,3)}function E(e){j(e.codemirror,"unordered-list")}function L(e){j(e.codemirror,"ordered-list")}function H(e){!function(e){if(/editor-preview-active/.test(e.getWrapperElement().lastChild.className))return;for(var t,i=e.getCursor("start"),o=e.getCursor("end"),a=i.line;a<=o.line;a++)t=(t=e.getLine(a)).replace(/^[ ]*([# ]+|\*|-|[> ]+|[0-9]+(.|\)))[ ]*/,""),e.replaceRange(t,{line:a,ch:0},{line:a,ch:99999999999999})}(e.codemirror)}function B(e){var t=e.codemirror,i=f(t),o=e.options,a="https://";if(o.promptURLs&&!(a=prompt(o.promptTexts.link,"https://")))return!1;U(t,i.link,o.insertTexts.link,a)}function M(e){var t=e.codemirror,i=f(t),o=e.options,a="https://";if(o.promptURLs&&!(a=prompt(o.promptTexts.image,"https://")))return!1;U(t,i.image,o.insertTexts.image,a)}function _(e,t){var i=e.codemirror,o=f(i),a=e.options,n=t.substr(t.lastIndexOf("/")+1);U(i,o.image,a.insertTexts.uploadedImage,t),e.updateStatusBar("upload-image",e.options.imageTexts.sbOnUploaded.replace("#image_name#",n)),setTimeout((function(){e.updateStatusBar("upload-image",e.options.imageTexts.sbInit)}),1e3)}function A(e){var t=e.codemirror,i=f(t),o=e.options;U(t,i.table,o.insertTexts.table)}function F(e){var t=e.codemirror,i=f(t),o=e.options;U(t,i.image,o.insertTexts.horizontalRule)}function z(e){var t=e.codemirror;t.undo(),t.focus()}function O(e){var t=e.codemirror;t.redo(),t.focus()}function q(e){var t=e.codemirror,i=t.getWrapperElement(),o=i.nextSibling,a=e.toolbarElements&&e.toolbarElements["side-by-side"],n=!1;/editor-preview-active-side/.test(o.className)?(o.className=o.className.replace(/\s*editor-preview-active-side\s*/g,""),a&&(a.className=a.className.replace(/\s*active\s*/g,"")),i.className=i.className.replace(/\s*CodeMirror-sided\s*/g," ")):(setTimeout((function(){t.getOption("fullScreen")||v(e),o.className+=" editor-preview-active-side"}),1),a&&(a.className+=" active"),i.className+=" CodeMirror-sided",n=!0);var r=i.lastChild;if(/editor-preview-active/.test(r.className)){r.className=r.className.replace(/\s*editor-preview-active\s*/g,"");var s=e.toolbarElements.preview,l=i.previousSibling;s.className=s.className.replace(/\s*active\s*/g,""),l.className=l.className.replace(/\s*disabled-for-preview*/g,"")}if(t.sideBySideRenderingFunction||(t.sideBySideRenderingFunction=function(){var t=e.options.previewRender(e.value(),o);null!=t&&(o.innerHTML=t)}),n){var c=e.options.previewRender(e.value(),o);null!=c&&(o.innerHTML=c),t.on("update",t.sideBySideRenderingFunction)}else t.off("update",t.sideBySideRenderingFunction);t.refresh()}function D(e){var t=e.codemirror,i=t.getWrapperElement(),o=i.previousSibling,a=!!e.options.toolbar&&e.toolbarElements.preview,n=i.lastChild;if(!n||!/editor-preview-full/.test(n.className)){if((n=document.createElement("div")).className="editor-preview-full",e.options.previewClass)if(Array.isArray(e.options.previewClass))for(var r=0;r<e.options.previewClass.length;r++)n.className+=" "+e.options.previewClass[r];else"string"===typeof e.options.previewClass&&(n.className+=" "+e.options.previewClass);i.appendChild(n)}/editor-preview-active/.test(n.className)?(n.className=n.className.replace(/\s*editor-preview-active\s*/g,""),a&&(a.className=a.className.replace(/\s*active\s*/g,""),o.className=o.className.replace(/\s*disabled-for-preview*/g,""))):(setTimeout((function(){n.className+=" editor-preview-active"}),1),a&&(a.className+=" active",o.className+=" disabled-for-preview")),n.innerHTML=e.options.previewRender(e.value(),n);var s=t.getWrapperElement().nextSibling;/editor-preview-active-side/.test(s.className)&&q(e)}function U(e,t,i,o){if(!/editor-preview-active/.test(e.getWrapperElement().lastChild.className)){var a,n=i[0],r=i[1],s={},l={};Object.assign(s,e.getCursor("start")),Object.assign(l,e.getCursor("end")),o&&(n=n.replace("#url#",o),r=r.replace("#url#",o)),t?(n=(a=e.getLine(s.line)).slice(0,s.ch),r=a.slice(s.ch),e.replaceRange(n+r,{line:s.line,ch:0})):(a=e.getSelection(),e.replaceSelection(n+a+r),s.ch+=n.length,s!==l&&(l.ch+=n.length)),e.setSelection(s,l),e.focus()}}function R(e,t,i){if(!/editor-preview-active/.test(e.getWrapperElement().lastChild.className)){for(var o=e.getCursor("start"),a=e.getCursor("end"),n=o.line;n<=a.line;n++)!function(o){var a=e.getLine(o),n=a.search(/[^#]/);a=void 0!==t?n<=0?"bigger"==t?"###### "+a:"# "+a:6==n&&"smaller"==t?a.substr(7):1==n&&"bigger"==t?a.substr(2):"bigger"==t?a.substr(1):"#"+a:1==i?n<=0?"# "+a:n==i?a.substr(n+1):"# "+a.substr(n+1):2==i?n<=0?"## "+a:n==i?a.substr(n+1):"## "+a.substr(n+1):n<=0?"### "+a:n==i?a.substr(n+1):"### "+a.substr(n+1),e.replaceRange(a,{line:o,ch:0},{line:o,ch:99999999999999})}(n);e.focus()}}function j(e,t){if(!/editor-preview-active/.test(e.getWrapperElement().lastChild.className)){for(var i=/^(\s*)(\*|-|\+|\d*\.)(\s+)/,o=/^\s*/,a=f(e),n=e.getCursor("start"),r=e.getCursor("end"),s={quote:/^(\s*)>\s+/,"unordered-list":i,"ordered-list":i},l=function(e,t,a){var n=i.exec(t),r=function(e,t){return{quote:">","unordered-list":"*","ordered-list":"%%i."}[e].replace("%%i",t)}(e,c);return null!==n?(function(e,t){var i=new RegExp({quote:">","unordered-list":"*","ordered-list":"\\d+."}[e]);return t&&i.test(t)}(e,n[2])&&(r=""),t=n[1]+r+n[3]+t.replace(o,"").replace(s[e],"$1")):0==a&&(t=r+" "+t),t},c=1,d=n.line;d<=r.line;d++)!function(i){var o=e.getLine(i);a[t]?o=o.replace(s[t],"$1"):("unordered-list"==t&&(o=l("ordered-list",o,!0)),o=l(t,o,!1),c+=1),e.replaceRange(o,{line:i,ch:0},{line:i,ch:99999999999999})}(d);e.focus()}}function P(e,t,i,o){if(!/editor-preview-active/.test(e.codemirror.getWrapperElement().lastChild.className)){o="undefined"===typeof o?i:o;var a,n=e.codemirror,r=f(n),s=i,l=o,c=n.getCursor("start"),d=n.getCursor("end");r[t]?(s=(a=n.getLine(c.line)).slice(0,c.ch),l=a.slice(c.ch),"bold"==t?(s=s.replace(/(\*\*|__)(?![\s\S]*(\*\*|__))/,""),l=l.replace(/(\*\*|__)/,"")):"italic"==t?(s=s.replace(/(\*|_)(?![\s\S]*(\*|_))/,""),l=l.replace(/(\*|_)/,"")):"strikethrough"==t&&(s=s.replace(/(\*\*|~~)(?![\s\S]*(\*\*|~~))/,""),l=l.replace(/(\*\*|~~)/,"")),n.replaceRange(s+l,{line:c.line,ch:0},{line:c.line,ch:99999999999999}),"bold"==t||"strikethrough"==t?(c.ch-=2,c!==d&&(d.ch-=2)):"italic"==t&&(c.ch-=1,c!==d&&(d.ch-=1))):(a=n.getSelection(),"bold"==t?a=(a=a.split("**").join("")).split("__").join(""):"italic"==t?a=(a=a.split("*").join("")).split("_").join(""):"strikethrough"==t&&(a=a.split("~~").join("")),n.replaceSelection(s+a+l),c.ch+=i.length,d.ch=c.ch+a.length),n.setSelection(c,d),n.focus()}}function W(e,t){if(Math.abs(e)<1024)return""+e+t[0];var i=0;do{e/=1024,++i}while(Math.abs(e)>=1024&&i<t.length);return""+e.toFixed(1)+t[i]}function V(e,t){for(var i in t)Object.prototype.hasOwnProperty.call(t,i)&&(t[i]instanceof Array?e[i]=t[i].concat(e[i]instanceof Array?e[i]:[]):null!==t[i]&&"object"===typeof t[i]&&t[i].constructor===Object?e[i]=V(e[i]||{},t[i]):e[i]=t[i]);return e}function $(e){for(var t=1;t<arguments.length;t++)e=V(e,arguments[t]);return e}function G(e){var t=e.match(/[a-zA-Z0-9_\u00A0-\u02AF\u0392-\u03c9\u0410-\u04F9]+|[\u4E00-\u9FFF\u3400-\u4dbf\uf900-\ufaff\u3040-\u309f\uac00-\ud7af]+/g),i=0;if(null===t)return i;for(var o=0;o<t.length;o++)t[o].charCodeAt(0)>=19968?i+=t[o].length:i+=1;return i}var K={bold:{name:"bold",action:b,className:"fa fa-bold",title:"Bold",default:!0},italic:{name:"italic",action:y,className:"fa fa-italic",title:"Italic",default:!0},strikethrough:{name:"strikethrough",action:w,className:"fa fa-strikethrough",title:"Strikethrough"},heading:{name:"heading",action:k,className:"fa fa-header fa-heading",title:"Heading",default:!0},"heading-smaller":{name:"heading-smaller",action:k,className:"fa fa-header fa-heading header-smaller",title:"Smaller Heading"},"heading-bigger":{name:"heading-bigger",action:N,className:"fa fa-header fa-heading header-bigger",title:"Bigger Heading"},"heading-1":{name:"heading-1",action:T,className:"fa fa-header fa-heading header-1",title:"Big Heading"},"heading-2":{name:"heading-2",action:x,className:"fa fa-header fa-heading header-2",title:"Medium Heading"},"heading-3":{name:"heading-3",action:I,className:"fa fa-header fa-heading header-3",title:"Small Heading"},"separator-1":{name:"separator-1"},code:{name:"code",action:S,className:"fa fa-code",title:"Code"},quote:{name:"quote",action:C,className:"fa fa-quote-left",title:"Quote",default:!0},"unordered-list":{name:"unordered-list",action:E,className:"fa fa-list-ul",title:"Generic List",default:!0},"ordered-list":{name:"ordered-list",action:L,className:"fa fa-list-ol",title:"Numbered List",default:!0},"clean-block":{name:"clean-block",action:H,className:"fa fa-eraser",title:"Clean block"},"separator-2":{name:"separator-2"},link:{name:"link",action:B,className:"fa fa-link",title:"Create Link",default:!0},image:{name:"image",action:M,className:"fa fa-image",title:"Insert Image",default:!0},"upload-image":{name:"upload-image",action:function(e){e.openBrowseFileWindow()},className:"fa fa-image",title:"Import an image"},table:{name:"table",action:A,className:"fa fa-table",title:"Insert Table"},"horizontal-rule":{name:"horizontal-rule",action:F,className:"fa fa-minus",title:"Insert Horizontal Line"},"separator-3":{name:"separator-3"},preview:{name:"preview",action:D,className:"fa fa-eye",noDisable:!0,title:"Toggle Preview",default:!0},"side-by-side":{name:"side-by-side",action:q,className:"fa fa-columns",noDisable:!0,noMobile:!0,title:"Toggle Side by Side",default:!0},fullscreen:{name:"fullscreen",action:v,className:"fa fa-arrows-alt",noDisable:!0,noMobile:!0,title:"Toggle Fullscreen",default:!0},"separator-4":{name:"separator-4"},guide:{name:"guide",action:"https://www.markdownguide.org/basic-syntax/",className:"fa fa-question-circle",noDisable:!0,title:"Markdown Guide",default:!0},"separator-5":{name:"separator-5"},undo:{name:"undo",action:z,className:"fa fa-undo",noDisable:!0,title:"Undo"},redo:{name:"redo",action:O,className:"fa fa-repeat fa-redo",noDisable:!0,title:"Redo"}},J={link:["[","](#url#)"],image:["![](","#url#)"],uploadedImage:["![](#url#)",""],table:["","\n\n| Column 1 | Column 2 | Column 3 |\n| -------- | -------- | -------- |\n| Text     | Text     | Text     |\n\n"],horizontalRule:["","\n\n-----\n\n"]},Y={link:"URL for the link:",image:"URL of the image:"},Q={locale:"en-US",format:{hour:"2-digit",minute:"2-digit"}},X={bold:"**",code:"```",italic:"*"},Z={sbInit:"Attach files by drag and dropping or pasting from clipboard.",sbOnDragEnter:"Drop image to upload it.",sbOnDrop:"Uploading image #images_names#...",sbProgress:"Uploading #file_name#: #progress#%",sbOnUploaded:"Uploaded #image_name#",sizeUnits:"b,Kb,Mb"},ee={noFileGiven:"You must select a file.",typeNotAllowed:"This image type is not allowed.",fileTooLarge:"Image #image_name# is too big (#image_size#).\nMaximum file size is #image_max_size#.",importError:"Something went wrong when uploading the image #image_name#."};function te(e){(e=e||{}).parent=this;var t=!0;if(!1===e.autoDownloadFontAwesome&&(t=!1),!0!==e.autoDownloadFontAwesome)for(var i=document.styleSheets,o=0;o<i.length;o++)i[o].href&&i[o].href.indexOf("//maxcdn.bootstrapcdn.com/font-awesome/")>-1&&(t=!1);if(t){var a=document.createElement("link");a.rel="stylesheet",a.href="https://maxcdn.bootstrapcdn.com/font-awesome/latest/css/font-awesome.min.css",document.getElementsByTagName("head")[0].appendChild(a)}if(e.element)this.element=e.element;else if(null===e.element)return void console.log("EasyMDE: Error. No element was found.");if(void 0===e.toolbar)for(var n in e.toolbar=[],K)Object.prototype.hasOwnProperty.call(K,n)&&(-1!=n.indexOf("separator-")&&e.toolbar.push("|"),(!0===K[n].default||e.showIcons&&e.showIcons.constructor===Array&&-1!=e.showIcons.indexOf(n))&&e.toolbar.push(n));if(Object.prototype.hasOwnProperty.call(e,"previewClass")||(e.previewClass="editor-preview"),Object.prototype.hasOwnProperty.call(e,"status")||(e.status=["autosave","lines","words","cursor"],e.uploadImage&&e.status.unshift("upload-image")),e.previewRender||(e.previewRender=function(e){return this.parent.markdown(e)}),e.parsingConfig=$({highlightFormatting:!0},e.parsingConfig||{}),e.insertTexts=$({},J,e.insertTexts||{}),e.promptTexts=$({},Y,e.promptTexts||{}),e.blockStyles=$({},X,e.blockStyles||{}),void 0!=e.autosave&&(e.autosave.timeFormat=$({},Q,e.autosave.timeFormat||{})),e.shortcuts=$({},c,e.shortcuts||{}),e.minHeight=e.minHeight||"300px",e.errorCallback=e.errorCallback||function(e){alert(e)},e.uploadImage=e.uploadImage||!1,e.imageMaxSize=e.imageMaxSize||2097152,e.imageAccept=e.imageAccept||"image/png, image/jpeg",e.imageTexts=$({},Z,e.imageTexts||{}),e.errorMessages=$({},ee,e.errorMessages||{}),void 0!=e.autosave&&void 0!=e.autosave.unique_id&&""!=e.autosave.unique_id&&(e.autosave.uniqueId=e.autosave.unique_id),this.options=e,this.render(),!e.initialValue||this.options.autosave&&!0===this.options.autosave.foundSavedValue||this.value(e.initialValue),e.uploadImage){var r=this;this.codemirror.on("dragenter",(function(e,t){r.updateStatusBar("upload-image",r.options.imageTexts.sbOnDragEnter),t.stopPropagation(),t.preventDefault()})),this.codemirror.on("dragend",(function(e,t){r.updateStatusBar("upload-image",r.options.imageTexts.sbInit),t.stopPropagation(),t.preventDefault()})),this.codemirror.on("dragleave",(function(e,t){r.updateStatusBar("upload-image",r.options.imageTexts.sbInit),t.stopPropagation(),t.preventDefault()})),this.codemirror.on("dragover",(function(e,t){r.updateStatusBar("upload-image",r.options.imageTexts.sbOnDragEnter),t.stopPropagation(),t.preventDefault()})),this.codemirror.on("drop",(function(t,i){i.stopPropagation(),i.preventDefault(),e.imageUploadFunction?r.uploadImagesUsingCustomFunction(e.imageUploadFunction,i.dataTransfer.files):r.uploadImages(i.dataTransfer.files)})),this.codemirror.on("paste",(function(t,i){e.imageUploadFunction?r.uploadImagesUsingCustomFunction(e.imageUploadFunction,i.clipboardData.files):r.uploadImages(i.clipboardData.files)}))}}function ie(){if("object"!==typeof localStorage)return!1;try{localStorage.setItem("smde_localStorage",1),localStorage.removeItem("smde_localStorage")}catch(e){return!1}return!0}te.prototype.uploadImages=function(e,t,i){if(0!==e.length){for(var o=[],a=0;a<e.length;a++)o.push(e[a].name),this.uploadImage(e[a],t,i);this.updateStatusBar("upload-image",this.options.imageTexts.sbOnDrop.replace("#images_names#",o.join(", ")))}},te.prototype.uploadImagesUsingCustomFunction=function(e,t){if(0!==t.length){for(var i=[],o=0;o<t.length;o++)i.push(t[o].name),this.uploadImageUsingCustomFunction(e,t[o]);this.updateStatusBar("upload-image",this.options.imageTexts.sbOnDrop.replace("#images_names#",i.join(", ")))}},te.prototype.updateStatusBar=function(e,t){var i=this.gui.statusbar.getElementsByClassName(e);1===i.length?this.gui.statusbar.getElementsByClassName(e)[0].textContent=t:0===i.length?console.log("EasyMDE: status bar item "+e+" was not found."):console.log("EasyMDE: Several status bar items named "+e+" was found.")},te.prototype.markdown=function(e){if(n){var t;if(t=this.options&&this.options.renderingConfig&&this.options.renderingConfig.markedOptions?this.options.renderingConfig.markedOptions:{},this.options&&this.options.renderingConfig&&!1===this.options.renderingConfig.singleLineBreaks?t.breaks=!1:t.breaks=!0,this.options&&this.options.renderingConfig&&!0===this.options.renderingConfig.codeSyntaxHighlighting){var i=this.options.renderingConfig.hljs||window.hljs;i&&(t.highlight=function(e){return i.highlightAuto(e).value})}n.setOptions(t);var o=n(e);return this.options.renderingConfig&&"function"===typeof this.options.renderingConfig.sanitizerFunction&&(o=this.options.renderingConfig.sanitizerFunction.call(this,o)),o=function(e){for(var t;null!==(t=s.exec(e));){var i=t[0];if(-1===i.indexOf("target=")){var o=i.replace(/>$/,' target="_blank">');e=e.replace(i,o)}}return e}(o)}},te.prototype.render=function(e){if(e||(e=this.element||document.getElementsByTagName("textarea")[0]),!this._rendered||this._rendered!==e){this.element=e;var t,i,n=this.options,r=this,s={};for(var c in n.shortcuts)null!==n.shortcuts[c]&&null!==l[c]&&function(e){s[u(n.shortcuts[e])]=function(){var t=l[e];"function"===typeof t?t(r):"string"===typeof t&&window.open(t,"_blank")}}(c);if(s.Enter="newlineAndIndentContinueMarkdownList",s.Tab="tabAndIndentMarkdownList",s["Shift-Tab"]="shiftTabAndUnindentMarkdownList",s.Esc=function(e){e.getOption("fullScreen")&&v(r)},document.addEventListener("keydown",(function(e){27==(e=e||window.event).keyCode&&r.codemirror.getOption("fullScreen")&&v(r)}),!1),!1!==n.spellChecker?(t="spell-checker",(i=n.parsingConfig).name="gfm",i.gitHubSpice=!1,a({codeMirrorInstance:o})):((t=n.parsingConfig).name="gfm",t.gitHubSpice=!1),this.codemirror=o.fromTextArea(e,{mode:t,backdrop:i,theme:void 0!=n.theme?n.theme:"easymde",tabSize:void 0!=n.tabSize?n.tabSize:2,indentUnit:void 0!=n.tabSize?n.tabSize:2,indentWithTabs:!1!==n.indentWithTabs,lineNumbers:!1,autofocus:!0===n.autofocus,extraKeys:s,lineWrapping:!1!==n.lineWrapping,allowDropFileTypes:["text/plain"],placeholder:n.placeholder||e.getAttribute("placeholder")||"",styleSelectedText:void 0!=n.styleSelectedText?n.styleSelectedText:!d(),configureMouse:function(e,t,i){return{addNew:!1}},inputStyle:void 0!=n.inputStyle?n.inputStyle:d()?"contenteditable":"textarea",spellcheck:void 0==n.nativeSpellcheck||n.nativeSpellcheck}),this.codemirror.getScrollerElement().style.minHeight=n.minHeight,!0===n.forceSync){var p=this.codemirror;p.on("change",(function(){p.save()}))}this.gui={},!1!==n.toolbar&&(this.gui.toolbar=this.createToolbar()),!1!==n.status&&(this.gui.statusbar=this.createStatusbar()),void 0!=n.autosave&&!0===n.autosave.enabled&&this.autosave(),this.gui.sideBySide=this.createSideBySide(),this._rendered=this.element;var g=this.codemirror;setTimeout(function(){g.refresh()}.bind(g),0)}},te.prototype.autosave=function(){if(ie()){var e=this;if(void 0==this.options.autosave.uniqueId||""==this.options.autosave.uniqueId)return void console.log("EasyMDE: You must set a uniqueId to use the autosave feature");!0!==this.options.autosave.binded&&(null!=e.element.form&&void 0!=e.element.form&&e.element.form.addEventListener("submit",(function(){clearTimeout(e.autosaveTimeoutId),e.autosaveTimeoutId=void 0,localStorage.removeItem("smde_"+e.options.autosave.uniqueId),setTimeout((function(){e.autosave()}),e.options.autosave.submit_delay||e.options.autosave.delay||1e4)})),this.options.autosave.binded=!0),!0!==this.options.autosave.loaded&&("string"==typeof localStorage.getItem("smde_"+this.options.autosave.uniqueId)&&""!=localStorage.getItem("smde_"+this.options.autosave.uniqueId)&&(this.codemirror.setValue(localStorage.getItem("smde_"+this.options.autosave.uniqueId)),this.options.autosave.foundSavedValue=!0),this.options.autosave.loaded=!0);var t=e.value();""!==t?localStorage.setItem("smde_"+this.options.autosave.uniqueId,t):localStorage.removeItem("smde_"+this.options.autosave.uniqueId);var i=document.getElementById("autosaved");if(null!=i&&void 0!=i&&""!=i){var o=new Date,a=new Intl.DateTimeFormat([this.options.autosave.timeFormat.locale,"en-US"],this.options.autosave.timeFormat.format).format(o),n=void 0==this.options.autosave.text?"Autosaved: ":this.options.autosave.text;i.innerHTML=n+a}this.autosaveTimeoutId=setTimeout((function(){e.autosave()}),this.options.autosave.delay||1e4)}else console.log("EasyMDE: localStorage not available, cannot autosave")},te.prototype.clearAutosavedValue=function(){if(ie()){if(void 0==this.options.autosave||void 0==this.options.autosave.uniqueId||""==this.options.autosave.uniqueId)return void console.log("EasyMDE: You must set a uniqueId to clear the autosave value");localStorage.removeItem("smde_"+this.options.autosave.uniqueId)}else console.log("EasyMDE: localStorage not available, cannot autosave")},te.prototype.openBrowseFileWindow=function(e,t){var i=this,o=this.gui.toolbar.getElementsByClassName("imageInput")[0];o.click(),o.addEventListener("change",(function a(n){i.options.imageUploadFunction?i.uploadImagesUsingCustomFunction(i.options.imageUploadFunction,n.target.files):i.uploadImages(n.target.files,e,t),o.removeEventListener("change",a)}))},te.prototype.uploadImage=function(e,t,i){var o=this;function a(e){o.updateStatusBar("upload-image",e),setTimeout((function(){o.updateStatusBar("upload-image",o.options.imageTexts.sbInit)}),1e4),i&&"function"===typeof i&&i(e),o.options.errorCallback(e)}function n(t){var i=o.options.imageTexts.sizeUnits.split(",");return t.replace("#image_name#",e.name).replace("#image_size#",W(e.size,i)).replace("#image_max_size#",W(o.options.imageMaxSize,i))}if(t=t||function(e){_(o,e)},e.size>this.options.imageMaxSize)a(n(this.options.errorMessages.fileTooLarge));else{var r=new FormData;r.append("image",e),o.options.imageCSRFToken&&r.append("csrfmiddlewaretoken",o.options.imageCSRFToken);var s=new XMLHttpRequest;s.upload.onprogress=function(t){if(t.lengthComputable){var i=""+Math.round(100*t.loaded/t.total);o.updateStatusBar("upload-image",o.options.imageTexts.sbProgress.replace("#file_name#",e.name).replace("#progress#",i))}},s.open("POST",this.options.imageUploadEndpoint),s.onload=function(){try{var e=JSON.parse(this.responseText)}catch(e){return console.error("EasyMDE: The server did not return a valid json."),void a(n(o.options.errorMessages.importError))}200===this.status&&e&&!e.error&&e.data&&e.data.filePath?t(window.location.origin+"/"+e.data.filePath):e.error&&e.error in o.options.errorMessages?a(n(o.options.errorMessages[e.error])):e.error?a(n(e.error)):(console.error("EasyMDE: Received an unexpected response after uploading the image."+this.status+" ("+this.statusText+")"),a(n(o.options.errorMessages.importError)))},s.onerror=function(e){console.error("EasyMDE: An unexpected error occurred when trying to upload the image."+e.target.status+" ("+e.target.statusText+")"),a(o.options.errorMessages.importError)},s.send(r)}},te.prototype.uploadImageUsingCustomFunction=function(e,t){var i=this;e(t,(function(e){_(i,e)}),(function(e){var o=function(e){var o=i.options.imageTexts.sizeUnits.split(",");return e.replace("#image_name#",t.name).replace("#image_size#",W(t.size,o)).replace("#image_max_size#",W(i.options.imageMaxSize,o))}(e);i.updateStatusBar("upload-image",o),setTimeout((function(){i.updateStatusBar("upload-image",i.options.imageTexts.sbInit)}),1e4),i.options.errorCallback(o)}))},te.prototype.createSideBySide=function(){var e=this.codemirror,t=e.getWrapperElement(),i=t.nextSibling;if(!i||!/editor-preview-side/.test(i.className)){if((i=document.createElement("div")).className="editor-preview-side",this.options.previewClass)if(Array.isArray(this.options.previewClass))for(var o=0;o<this.options.previewClass.length;o++)i.className+=" "+this.options.previewClass[o];else"string"===typeof this.options.previewClass&&(i.className+=" "+this.options.previewClass);t.parentNode.insertBefore(i,t.nextSibling)}if(!1===this.options.syncSideBySidePreviewScroll)return i;var a=!1,n=!1;return e.on("scroll",(function(e){if(a)a=!1;else{n=!0;var t=e.getScrollInfo().height-e.getScrollInfo().clientHeight,o=parseFloat(e.getScrollInfo().top)/t,r=(i.scrollHeight-i.clientHeight)*o;i.scrollTop=r}})),i.onscroll=function(){if(n)n=!1;else{a=!0;var t=i.scrollHeight-i.clientHeight,o=parseFloat(i.scrollTop)/t,r=(e.getScrollInfo().height-e.getScrollInfo().clientHeight)*o;e.scrollTo(0,r)}},i},te.prototype.createToolbar=function(e){if((e=e||this.options.toolbar)&&0!==e.length){var t;for(t=0;t<e.length;t++)void 0!=K[e[t]]&&(e[t]=K[e[t]]);var i=document.createElement("div");i.className="editor-toolbar";var o=this,a={};for(o.toolbar=e,t=0;t<e.length;t++)if(("guide"!=e[t].name||!1!==o.options.toolbarGuideIcon)&&(!o.options.hideIcons||-1==o.options.hideIcons.indexOf(e[t].name))&&("fullscreen"!=e[t].name&&"side-by-side"!=e[t].name||!d())){if("|"===e[t]){for(var n=!1,r=t+1;r<e.length;r++)"|"===e[r]||o.options.hideIcons&&-1!=o.options.hideIcons.indexOf(e[r].name)||(n=!0);if(!n)continue}!function(e){var t;if(t="|"===e?m():e.children?p(e,o.options.toolbarTips,o.options.shortcuts,o):g(e,!0,o.options.toolbarTips,o.options.shortcuts,"button",o),a[e.name||e]=t,i.appendChild(t),"upload-image"===e.name){var n=document.createElement("input");n.className="imageInput",n.type="file",n.multiple=!0,n.name="image",n.accept=o.options.imageAccept,n.style.display="none",n.style.opacity=0,i.appendChild(n)}}(e[t])}o.toolbarElements=a;var s=this.codemirror;s.on("cursorActivity",(function(){var e=f(s);for(var t in a)!function(t){var i=a[t];e[t]?i.className+=" active":"fullscreen"!=t&&"side-by-side"!=t&&(i.className=i.className.replace(/\s*active\s*/g,""))}(t)}));var l=s.getWrapperElement();return l.parentNode.insertBefore(i,l),i}},te.prototype.createStatusbar=function(e){e=e||this.options.status;var t=this.options,i=this.codemirror;if(e&&0!==e.length){var o,a,n,r=[];for(o=0;o<e.length;o++)if(a=void 0,n=void 0,"object"===typeof e[o])r.push({className:e[o].className,defaultValue:e[o].defaultValue,onUpdate:e[o].onUpdate});else{var s=e[o];"words"===s?(n=function(e){e.innerHTML=G(i.getValue())},a=function(e){e.innerHTML=G(i.getValue())}):"lines"===s?(n=function(e){e.innerHTML=i.lineCount()},a=function(e){e.innerHTML=i.lineCount()}):"cursor"===s?(n=function(e){e.innerHTML="0:0"},a=function(e){var t=i.getCursor();e.innerHTML=t.line+":"+t.ch}):"autosave"===s?n=function(e){void 0!=t.autosave&&!0===t.autosave.enabled&&e.setAttribute("id","autosaved")}:"upload-image"===s&&(n=function(e){e.innerHTML=t.imageTexts.sbInit}),r.push({className:s,defaultValue:n,onUpdate:a})}var l=document.createElement("div");for(l.className="editor-statusbar",o=0;o<r.length;o++){var c=r[o],d=document.createElement("span");d.className=c.className,"function"===typeof c.defaultValue&&c.defaultValue(d),"function"===typeof c.onUpdate&&this.codemirror.on("update",function(e,t){return function(){t.onUpdate(e)}}(d,c)),l.appendChild(d)}var u=this.codemirror.getWrapperElement();return u.parentNode.insertBefore(l,u.nextSibling),l}},te.prototype.value=function(e){var t=this.codemirror;if(void 0===e)return t.getValue();if(t.getDoc().setValue(e),this.isPreviewActive()){var i=t.getWrapperElement().lastChild;i.innerHTML=this.options.previewRender(e,i)}return this},te.toggleBold=b,te.toggleItalic=y,te.toggleStrikethrough=w,te.toggleBlockquote=C,te.toggleHeadingSmaller=k,te.toggleHeadingBigger=N,te.toggleHeading1=T,te.toggleHeading2=x,te.toggleHeading3=I,te.toggleCodeBlock=S,te.toggleUnorderedList=E,te.toggleOrderedList=L,te.cleanBlock=H,te.drawLink=B,te.drawImage=M,te.drawTable=A,te.drawHorizontalRule=F,te.undo=z,te.redo=O,te.togglePreview=D,te.toggleSideBySide=q,te.toggleFullScreen=v,te.prototype.toggleBold=function(){b(this)},te.prototype.toggleItalic=function(){y(this)},te.prototype.toggleStrikethrough=function(){w(this)},te.prototype.toggleBlockquote=function(){C(this)},te.prototype.toggleHeadingSmaller=function(){k(this)},te.prototype.toggleHeadingBigger=function(){N(this)},te.prototype.toggleHeading1=function(){T(this)},te.prototype.toggleHeading2=function(){x(this)},te.prototype.toggleHeading3=function(){I(this)},te.prototype.toggleCodeBlock=function(){S(this)},te.prototype.toggleUnorderedList=function(){E(this)},te.prototype.toggleOrderedList=function(){L(this)},te.prototype.cleanBlock=function(){H(this)},te.prototype.drawLink=function(){B(this)},te.prototype.drawImage=function(){M(this)},te.prototype.drawTable=function(){A(this)},te.prototype.drawHorizontalRule=function(){F(this)},te.prototype.undo=function(){z(this)},te.prototype.redo=function(){O(this)},te.prototype.togglePreview=function(){D(this)},te.prototype.toggleSideBySide=function(){q(this)},te.prototype.toggleFullScreen=function(){v(this)},te.prototype.isPreviewActive=function(){var e=this.codemirror.getWrapperElement().lastChild;return/editor-preview-active/.test(e.className)},te.prototype.isSideBySideActive=function(){var e=this.codemirror.getWrapperElement().nextSibling;return/editor-preview-active-side/.test(e.className)},te.prototype.isFullscreenActive=function(){return this.codemirror.getOption("fullScreen")},te.prototype.getState=function(){return f(this.codemirror)},te.prototype.toTextArea=function(){var e=this.codemirror,t=e.getWrapperElement();t.parentNode&&(this.gui.toolbar&&t.parentNode.removeChild(this.gui.toolbar),this.gui.statusbar&&t.parentNode.removeChild(this.gui.statusbar),this.gui.sideBySide&&t.parentNode.removeChild(this.gui.sideBySide)),e.toTextArea(),this.autosaveTimeoutId&&(clearTimeout(this.autosaveTimeoutId),this.autosaveTimeoutId=void 0,this.clearAutosavedValue())},e.exports=te}}]);