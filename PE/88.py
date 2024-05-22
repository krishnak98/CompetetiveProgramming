def is_divisible_by_11(number):
    return number % 107 == 0

with open('88_info.txt', 'r') as file:
    for line in file:
        parts = line.split()
        if len(parts) == 2:
            try:
                second_number = int(parts[1])
                result = is_divisible_by_11(second_number)
                if result:
                    print(second_number)
                # print(f"The second number {second_number} is divisible by 11: {result}")
            except ValueError:
                print(f"Skipping line: {line.strip()} (Invalid number format)")
        else:
            print(f"Skipping line: {line.strip()} (Expected two numbers per line)")
