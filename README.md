# 🚗 Car Booking App

This is a simple Car Booking App built using **Qt Creator**. It provides a smooth interface for car rental management, including login authentication, car entry, and car booking features.

---

## 📂 How to Run

1. Open the project in **Qt Creator**.
2. Load the project by opening the file: `car_book.pro`.
3. The project consists of three types of files for each section:
   - **Header Files (`.h`)**
   - **Source Files (`.cpp`)**
   - **UI Files (`.ui`)**

---

## 🧩 Project Sections

There are web pages in the application:

### 1. 🔐 Login Page


![Screenshot 2025-04-16 152909](https://github.com/user-attachments/assets/5e23f365-6dda-4e50-b2d0-523373470f83)


- Authenticates the user using a predefined ID and password.
- **Default credentials:**
  - **User ID**: `admin`
  - **Password**: `admin123`

---

### 2. 🏠 Main Menu
![Screenshot 2025-04-16 153105](https://github.com/user-attachments/assets/705130fd-8b36-4be9-b97f-d3bee73818b0)

Provides two core options:

####  Add Car Section

![Screenshot 2025-04-16 153331](https://github.com/user-attachments/assets/fc76d9b2-45bc-47a0-84a0-0e0647479a55)


- Add car details:
  - `car number`, `brand`, `type`, and `fare`.
- Data is saved to: `CarData.txt`.

#### 🚘 Book Car Section

![Screenshot 2025-04-16 153608](https://github.com/user-attachments/assets/b4120da1-becd-47ff-9f15-8a6650d96429)


- Allows users to book a car from the existing car list.
- Requires user details and the car they wish to book.
- Once booked, that car will no longer appear in the available list.
- Booking data is saved to: `BookcarData.txt`.

---

## 📩 Contact

For any queries or support, feel free to reach out:

📧 **Email:** [shivamfeb77@gmail.com](mailto:shivamfeb77@gmail.com)

---

## 🙏 Thank You!

Hope you find this app useful. Contributions and feedback are always welcome!

