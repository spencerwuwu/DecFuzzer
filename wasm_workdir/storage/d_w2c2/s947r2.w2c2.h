#ifndef s947r2_H
#define s947r2_H

#include "w2c2_base.h"

typedef struct s947r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s947r2Instance;

void f0(s947r2Instance*);

void f1(s947r2Instance*);

U32 f2(s947r2Instance*);

void f3(s947r2Instance*,U32);

U32 f4(s947r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s947r2Instance*,U32,U32,U32,U32,U32);

void f6(s947r2Instance*,U32);

void f7(s947r2Instance*,U32,U32,U32);

void f8(s947r2Instance*,U32,U32,U32);

void s947r2____wasm_call_ctors(s947r2Instance*i);

void s947r2____wasm_apply_data_relocs(s947r2Instance*i);

U32 s947r2_func_1(s947r2Instance*i);

void s947r2_call_cb(s947r2Instance*i,U32 l0);

void s947r2Instantiate(s947r2Instance* instance, void* resolve(const char* module, const char* name));

void s947r2FreeInstance(s947r2Instance* instance);

#endif /* s947r2_H */

