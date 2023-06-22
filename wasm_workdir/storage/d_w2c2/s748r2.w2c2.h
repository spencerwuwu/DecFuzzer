#ifndef s748r2_H
#define s748r2_H

#include "w2c2_base.h"

typedef struct s748r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s748r2Instance;

void f0(s748r2Instance*);

void f1(s748r2Instance*);

U32 f2(s748r2Instance*);

void f3(s748r2Instance*,U32);

U32 f4(s748r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s748r2Instance*,U32,U32,U32,U32,U32);

void f6(s748r2Instance*,U32);

void f7(s748r2Instance*,U32,U32,U32);

void f8(s748r2Instance*,U32,U32,U32);

void s748r2____wasm_call_ctors(s748r2Instance*i);

void s748r2____wasm_apply_data_relocs(s748r2Instance*i);

U32 s748r2_func_1(s748r2Instance*i);

void s748r2_call_cb(s748r2Instance*i,U32 l0);

void s748r2Instantiate(s748r2Instance* instance, void* resolve(const char* module, const char* name));

void s748r2FreeInstance(s748r2Instance* instance);

#endif /* s748r2_H */

