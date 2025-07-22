# 💰 Weekly Sales Analyzer

A simple C++ console application that captures total daily sales over a 7-day period and calculates:

- ✅ Weekly average sales  
- 📈 Highest daily sales  
- 📉 Lowest daily sales  
- 🧾 A complete list of daily figures  

Perfect for practice with vectors, basic statistics, and `std::accumulate()`.

---

## 📁 File Structure

├── main.cpp # Main source code file


---

## 🌟 Features

✔️ Enter total sales for 7 days (in Rands)  
✔️ Automatically compute the weekly average  
✔️ Identify the highest and lowest daily sales  
✔️ Print a clean summary to the console  
✔️ Uses STL vectors and algorithms for simplicity and performance  

---

## 📊 Example Output

Enter total daily sales for 7 days(In Rands):

Day 1: 1200

Day 2: 950

Day 3: 1100

Day 4: 880

Day 5: 1350

Day 6: 990

Day 7: 1020

Average weekly sales :1070

Highesst daily sales :1350

Lowest daily sales :880

Sales figures in the order entered:

Day 1: R1200.00

Day 2: R950.00

Day 3: R1100.00

Day 4: R880.00

Day 5: R1350.00

Day 6: R990.00

Day 7: R1020.00



## 🧑‍💻 Build & Run Instructions

### 🐧 Linux / macOS / WSL (g++)

```bash
g++ -o sales weekly_sales.cpp
./sales
```

## 🪟 Windows (MSVC / Visual Studio)
Open or create a Console App project.

Paste the contents of weekly_sales.cpp.

Build and run from the IDE.
