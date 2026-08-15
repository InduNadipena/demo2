const todos = [];
function addTodo(title) {
    todos.push({ title, completed: false });
}
function completeTodo(index) {
    if (todos[index]) todos[index].completed = true;
}
addTodo("Learn JavaScript");
completeTodo(0);
console.log(todos);