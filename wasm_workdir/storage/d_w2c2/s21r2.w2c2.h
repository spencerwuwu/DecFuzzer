#ifndef s21r2_H
#define s21r2_H

#include "w2c2_base.h"

typedef struct s21r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s21r2Instance;

void f0(s21r2Instance*);

void f1(s21r2Instance*);

U32 f2(s21r2Instance*);

void f3(s21r2Instance*,U32);

U32 f4(s21r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s21r2Instance*,U32,U32,U32,U32,U32);

void f6(s21r2Instance*,U32);

void f7(s21r2Instance*,U32,U32,U32);

void f8(s21r2Instance*,U32,U32,U32);

void s21r2____wasm_call_ctors(s21r2Instance*i);

void s21r2____wasm_apply_data_relocs(s21r2Instance*i);

U32 s21r2_func_1(s21r2Instance*i);

void s21r2_call_cb(s21r2Instance*i,U32 l0);

void s21r2Instantiate(s21r2Instance* instance, void* resolve(const char* module, const char* name));

void s21r2FreeInstance(s21r2Instance* instance);

#endif /* s21r2_H */
