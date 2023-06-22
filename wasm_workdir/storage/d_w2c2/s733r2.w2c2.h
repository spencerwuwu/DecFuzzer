#ifndef s733r2_H
#define s733r2_H

#include "w2c2_base.h"

typedef struct s733r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s733r2Instance;

void f0(s733r2Instance*);

void f1(s733r2Instance*);

U32 f2(s733r2Instance*);

void f3(s733r2Instance*,U32);

U32 f4(s733r2Instance*,U32,U32,U32);

void f5(s733r2Instance*,U32,U32,U32,U32,U32);

void f6(s733r2Instance*,U32);

void f7(s733r2Instance*,U32,U32,U32);

void f8(s733r2Instance*,U32,U32,U32);

void s733r2____wasm_call_ctors(s733r2Instance*i);

void s733r2____wasm_apply_data_relocs(s733r2Instance*i);

U32 s733r2_func_1(s733r2Instance*i);

void s733r2_call_cb(s733r2Instance*i,U32 l0);

void s733r2Instantiate(s733r2Instance* instance, void* resolve(const char* module, const char* name));

void s733r2FreeInstance(s733r2Instance* instance);

#endif /* s733r2_H */

