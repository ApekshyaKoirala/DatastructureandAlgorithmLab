def TOH(n, src, dst, temp):
    if n==1:
        print(f"Move disc {n} from {src} to {dst}")

    else:
        TOH(n-1, src, temp, dst)
        print(f"Move disc {n} from {src} to {dst}")
        TOH(n-1, temp, dst, src)
if __name__ =="__main__":
   n=int(input("Enter a number"))
   TOH(n, 'A', 'C', 'B')