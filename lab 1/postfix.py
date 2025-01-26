def evaluate_postfix(postfix):
    temporary=postfix.split()
    stack=[]
    operator =["**", "/" , "*", "+", "-"]
    for value in temporary:
        if value.isdigit():
            stack.append(float(value))

        elif value in operator: 
            operand1=stack.pop()
            operand2=stack.pop()
            if value=="**":
               result=operand2 ** operand1
            elif value=="/":
               result=operand2 / operand1
            elif value=="*":
               result=operand2 * operand1
            elif value=="+":
               result=operand2 +  operand1
            elif value=="-":
               result=operand2 - operand1


            stack.append(result)
    return stack.pop()


postfix = input("Enter your postfix expression")
answer=evaluate_postfix(postfix)
print(f"The answer of evaluated answer is  {answer}")