#ifndef s853r2_H
#define s853r2_H

#include "w2c2_base.h"

typedef struct s853r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s853r2Instance;

void f0(s853r2Instance*);

void f1(s853r2Instance*);

U32 f2(s853r2Instance*);

void f3(s853r2Instance*,U32);

U32 f4(s853r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s853r2Instance*,U32,U32,U32,U32,U32);

void f6(s853r2Instance*,U32);

void f7(s853r2Instance*,U32,U32,U32);

void f8(s853r2Instance*,U32,U32,U32);

void s853r2____wasm_call_ctors(s853r2Instance*i);

void s853r2____wasm_apply_data_relocs(s853r2Instance*i);

U32 s853r2_func_1(s853r2Instance*i);

void s853r2_call_cb(s853r2Instance*i,U32 l0);

void s853r2Instantiate(s853r2Instance* instance, void* resolve(const char* module, const char* name));

void s853r2FreeInstance(s853r2Instance* instance);

#endif /* s853r2_H */

