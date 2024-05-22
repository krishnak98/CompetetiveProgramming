def sum_file_lines(file_path):
    total_sum = 0
    with open(file_path, 'r') as file:
        for line in file:
            line = line.strip()  # Remove any leading/trailing whitespace
            if line:  # Check if the line is not empty
                total_sum += float(line)  # Convert the line to a float and add to the total sum
    return total_sum



file_path = '700.txt'  # Replace with your file path
total = sum_file_lines(file_path)
print(f"Total sum: {total}")
