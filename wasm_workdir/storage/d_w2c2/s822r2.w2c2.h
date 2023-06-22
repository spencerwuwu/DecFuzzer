#ifndef s822r2_H
#define s822r2_H

#include "w2c2_base.h"

typedef struct s822r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s822r2Instance;

void f0(s822r2Instance*);

void f1(s822r2Instance*);

U32 f2(s822r2Instance*);

void f3(s822r2Instance*,U32);

U32 f4(s822r2Instance*,U32,U32,U32,U32,U32);

void f5(s822r2Instance*,U32,U32,U32,U32,U32);

void f6(s822r2Instance*,U32);

void f7(s822r2Instance*,U32,U32,U32);

void f8(s822r2Instance*,U32,U32,U32);

void s822r2____wasm_call_ctors(s822r2Instance*i);

void s822r2____wasm_apply_data_relocs(s822r2Instance*i);

U32 s822r2_func_1(s822r2Instance*i);

void s822r2_call_cb(s822r2Instance*i,U32 l0);

void s822r2Instantiate(s822r2Instance* instance, void* resolve(const char* module, const char* name));

void s822r2FreeInstance(s822r2Instance* instance);

#endif /* s822r2_H */

