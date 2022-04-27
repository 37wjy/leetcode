

function ListNode(val, next) {
    this.val = (val===undefined ? 0 : val)
    this.next = (next===undefined ? null : next)
}

var mergeTwoLists = function(list1, list2) {
    if (list1 == null) {
        return list2;
    }
    if (list2 == null) {
        return list1;
    }
    if (list1.val>list2.val) {
        list2.next=mergeTwoLists(list1,list2.next);
        return list2;
    }
    else{
        list1.next=mergeTwoLists(list1.next,list2);
        return list1;
    }
    return null
};

var buildListNode = function (list,i) {
    if (i>=list.size) {
        return null;
    }
    return ListNode(list[i],buildListNode(list,i+1));
}
 
console.log(buildListNode([1,2,3]));