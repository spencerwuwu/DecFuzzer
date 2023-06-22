#ifndef s88r2_H
#define s88r2_H

#include "w2c2_base.h"

typedef struct s88r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s88r2Instance;

void f0(s88r2Instance*);

void f1(s88r2Instance*);

U32 f2(s88r2Instance*);

void f3(s88r2Instance*,U32);

U32 f4(s88r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s88r2Instance*,U32,U32,U32,U32,U32);

void f6(s88r2Instance*,U32);

void f7(s88r2Instance*,U32,U32,U32);

void f8(s88r2Instance*,U32,U32,U32);

void s88r2____wasm_call_ctors(s88r2Instance*i);

void s88r2____wasm_apply_data_relocs(s88r2Instance*i);

U32 s88r2_func_1(s88r2Instance*i);

void s88r2_call_cb(s88r2Instance*i,U32 l0);

void s88r2Instantiate(s88r2Instance* instance, void* resolve(const char* module, const char* name));

void s88r2FreeInstance(s88r2Instance* instance);

#endif /* s88r2_H */

