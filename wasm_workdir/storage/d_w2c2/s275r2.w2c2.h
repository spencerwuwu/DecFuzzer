#ifndef s275r2_H
#define s275r2_H

#include "w2c2_base.h"

typedef struct s275r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s275r2Instance;

void f0(s275r2Instance*);

void f1(s275r2Instance*);

U32 f2(s275r2Instance*);

void f3(s275r2Instance*,U32);

U32 f4(s275r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s275r2Instance*,U32,U32,U32,U32,U32);

void f6(s275r2Instance*,U32);

void f7(s275r2Instance*,U32,U32,U32);

void f8(s275r2Instance*,U32,U32,U32);

void s275r2____wasm_call_ctors(s275r2Instance*i);

void s275r2____wasm_apply_data_relocs(s275r2Instance*i);

U32 s275r2_func_1(s275r2Instance*i);

void s275r2_call_cb(s275r2Instance*i,U32 l0);

void s275r2Instantiate(s275r2Instance* instance, void* resolve(const char* module, const char* name));

void s275r2FreeInstance(s275r2Instance* instance);

#endif /* s275r2_H */

