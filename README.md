# 🚩 GDB CTF: The Piscine Debugging Challenge

> **"Si puedes debuggear en el examen, puedes sobrevivir a cualquier cosa."**
> Un reto de 3 niveles inspirado en el estilo de los proyectos C0X y los Rush de 42.

![GDB](https://img.shields.io/badge/GDB-Debugger-blue.svg)
![C](https://img.shields.io/badge/Language-C-A8B9CC.svg)
![42](https://img.shields.io/badge/School-42-black.svg)

---

## 🎯 Objetivo de la Misión

Has recibido tres binarios que "deberían" funcionar, pero están plagados de bugs lógicos. Tu misión no es solo encontrar el error, sino aprender a dominar **GDB** en el proceso.

1. **Detectar:** Ejecutar y ver cómo falla (segfault, errores de lógica o bucles).
2. **Analizar:** Usar GDB para inspeccionar la memoria y el flujo.
3. **Reparar:** Corregir el código fuente, recompilar con `make` y capturar la **flag**.

---

## 📂 Estructura del Desafío

| Nivel | Estilo | Conceptos Clave | Dificultad |
| :--- | :--- | :--- | :--- |
| **Level 1** | C00 / C01 | `break`, `next`, `print`, `info locals` | 🟢 Fácil |
| **Level 2** | C02 - C05 | `step`, `backtrace`, `watch`, strings | 🟡 Medio |
| **Level 3** | Rush Modular | `display`, `jump`, modularidad, parseo | 🔴 Difícil |

---

## 🛠️ Instrucciones de Combate

### 1. Preparación

Para compilar todos los niveles a la vez (incluyendo flags de debug `-g`):

```bash
make all
```

### 2. Entrenamiento por niveles

#### 🟢 Nivel 1: La Puerta de Entrada

Ejecución:

```bash
./level1/level1 4242
```

Comandos sugeridos:

```gdb
break verify_pin
run 4242
print pin
info locals
```

Flag esperada: `FLAG{nivel1_break_next_print}`

#### 🟡 Nivel 2: El Rastro de Strings

Ejecución:

```bash
./level2/level2 "gdb master 42"
```

Comandos sugeridos:

```gdb
break check_token
step
backtrace
watch sum
```

Flag esperada: `FLAG{nivel2_step_watch_backtrace}`

#### 🔴 Nivel 3: El Rush del Debugging

Ejecución:

```bash
./level3/level3 5 3 RUSH-DEBUG-53
```

Comandos sugeridos:

```gdb
break rush_checksum
display row
display col
finish
```

Flag esperada: `FLAG{nivel3_modular_rush_debug}`

---

## 🇺🇸 English Version

> **"If you can debug during the exam, you can survive anything."**
> A 3-level challenge inspired by 42's C0X projects and Rush style.

![GDB](https://img.shields.io/badge/GDB-Debugger-blue.svg)
![C](https://img.shields.io/badge/Language-C-A8B9CC.svg)
![42](https://img.shields.io/badge/School-42-black.svg)

---

## 🎯 Mission Objective

You have received three binaries that "should" work, but they are riddled with logical bugs. Your mission is not just to find the error, but to master **GDB** in the process.

1. **Detect:** Run and observe the failure (segfault, logic errors, or infinite loops).
2. **Analyze:** Use GDB to inspect memory and execution flow.
3. **Fix:** Correct the source code, recompile with `make`, and capture the **flag**.

---

## 📂 Repository Structure

| Level | Style | Key Concepts | Difficulty |
| :--- | :--- | :--- | :--- |
| **Level 1** | C00 / C01 | `break`, `next`, `print`, `info locals` | 🟢 Easy |
| **Level 2** | C02 - C05 | `step`, `backtrace`, `watch`, strings | 🟡 Medium |
| **Level 3** | Modular Rush | `display`, `jump`, modularity, parsing | 🔴 Hard |

---

## 🛠️ Combat Instructions

### 1. Setup

To compile all levels at once (including `-g` debug flags):

```bash
make all
```

### 2. Level-by-Level Training

#### 🟢 Level 1: The Gateway

Execution:

```bash
./level1/level1 4242
```

Suggested commands:

```gdb
break verify_pin
run 4242
print pin
info locals
```

Expected flag: `FLAG{nivel1_break_next_print}`

#### 🟡 Level 2: The String Trail

Execution:

```bash
./level2/level2 "gdb master 42"
```

Suggested commands:

```gdb
break check_token
step
backtrace
watch sum
```

Expected flag: `FLAG{nivel2_step_watch_backtrace}`

#### 🔴 Level 3: The Debugging Rush

Execution:

```bash
./level3/level3 5 3 RUSH-DEBUG-53
```

Suggested commands:

```gdb
break rush_checksum
display row
display col
finish
```

Expected flag: `FLAG{nivel3_modular_rush_debug}`