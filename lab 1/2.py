def evaluate_postfix(postfix):
    # Split the input into a list of tokens
    tokens = postfix.split()
    stack = []
    operators = {"**", "/", "*", "+", "-"}  # Set of valid operators

    for value in tokens:
        if value.isdigit():  # If it's a digit, push to the stack
            stack.append(float(value))
        elif value in operators:  # If it's an operator
            # Pop the top two elements (order matters for non-commutative operations)
            operand1 = stack.pop()
            operand2 = stack.pop()

            # Perform the operation
            if value == "**":
                result = operand2 ** operand1
            elif value == "/":
                result = operand2 / operand1
            elif value == "*":
                result = operand2 * operand1
            elif value == "+":
                result = operand2 + operand1
            elif value == "-":
                result = operand2 - operand1

            # Push the result back onto the stack
            stack.append(result)

    # The final result is the last item in the stack
    return stack.pop()

# Input from the user
postfix = input("Enter your postfix expression (space-separated): ")
answer = evaluate_postfix(postfix)
print(f"The answer of the evaluated expression is {answer}")
