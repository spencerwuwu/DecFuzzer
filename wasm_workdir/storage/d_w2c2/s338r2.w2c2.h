#ifndef s338r2_H
#define s338r2_H

#include "w2c2_base.h"

typedef struct s338r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s338r2Instance;

void f0(s338r2Instance*);

void f1(s338r2Instance*);

U32 f2(s338r2Instance*);

void f3(s338r2Instance*,U32);

U32 f4(s338r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s338r2Instance*,U32,U32,U32,U32,U32);

void f6(s338r2Instance*,U32);

void f7(s338r2Instance*,U32,U32,U32);

void f8(s338r2Instance*,U32,U32,U32);

void s338r2____wasm_call_ctors(s338r2Instance*i);

void s338r2____wasm_apply_data_relocs(s338r2Instance*i);

U32 s338r2_func_1(s338r2Instance*i);

void s338r2_call_cb(s338r2Instance*i,U32 l0);

void s338r2Instantiate(s338r2Instance* instance, void* resolve(const char* module, const char* name));

void s338r2FreeInstance(s338r2Instance* instance);

#endif /* s338r2_H */

