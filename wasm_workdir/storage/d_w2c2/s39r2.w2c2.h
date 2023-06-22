#ifndef s39r2_H
#define s39r2_H

#include "w2c2_base.h"

typedef struct s39r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s39r2Instance;

void f0(s39r2Instance*);

void f1(s39r2Instance*);

U32 f2(s39r2Instance*);

void f3(s39r2Instance*,U32);

U32 f4(s39r2Instance*,U32,U32,U32);

void f5(s39r2Instance*,U32,U32,U32,U32,U32);

void f6(s39r2Instance*,U32);

void f7(s39r2Instance*,U32,U32,U32);

void f8(s39r2Instance*,U32,U32,U32);

void s39r2____wasm_call_ctors(s39r2Instance*i);

void s39r2____wasm_apply_data_relocs(s39r2Instance*i);

U32 s39r2_func_1(s39r2Instance*i);

void s39r2_call_cb(s39r2Instance*i,U32 l0);

void s39r2Instantiate(s39r2Instance* instance, void* resolve(const char* module, const char* name));

void s39r2FreeInstance(s39r2Instance* instance);

#endif /* s39r2_H */

