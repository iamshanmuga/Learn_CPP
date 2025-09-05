# 🔑 Virtual Functions vs Pure Virtual Functions in C++

| Feature | **Virtual Function** | **Pure Virtual Function** |
|---------|----------------------|---------------------------|
| **Definition** | A function in a base class that can be **overridden** by derived classes. | A virtual function with `= 0` in its declaration. Forces derived classes to implement it. |
| **Implementation in Base Class** | Can have a **default implementation** in the base class. | **No implementation** in base class (unless provided separately, but usually not). |
| **Abstract Class Requirement** | Class can still be **instantiated** if it only has virtual functions. | Makes the class an **abstract class** → cannot be instantiated. |
| **Purpose** | Provides an option: Derived classes may override, or use base version. | Provides an obligation: Derived classes **must override**. |
| **Example** |  
```cpp
class Animal {
public:
    virtual void speak() {
        cout << "Generic animal sound\n";
    }
};
``` |  
```cpp
class Animal {
public:
    virtual void speak() = 0; // pure virtual
};
```

 **Usage** 
- Flexible, allows base classes to have default behavior. 
- Used when base class is just a **blueprint/interface**.

---

## ⚡ In Short
- **Virtual Function** → “Here’s a default, but you can override it if you want.”  
- **Pure Virtual Function** → “No default. You **must** override this in derived classes.”  