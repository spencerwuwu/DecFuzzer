#ifndef s490r2_H
#define s490r2_H

#include "w2c2_base.h"

typedef struct s490r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s490r2Instance;

void f0(s490r2Instance*);

void f1(s490r2Instance*);

U32 f2(s490r2Instance*);

void f3(s490r2Instance*,U32);

U32 f4(s490r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s490r2Instance*,U32,U32,U32,U32,U32);

void f6(s490r2Instance*,U32);

void f7(s490r2Instance*,U32,U32,U32);

void f8(s490r2Instance*,U32,U32,U32);

void s490r2____wasm_call_ctors(s490r2Instance*i);

void s490r2____wasm_apply_data_relocs(s490r2Instance*i);

U32 s490r2_func_1(s490r2Instance*i);

void s490r2_call_cb(s490r2Instance*i,U32 l0);

void s490r2Instantiate(s490r2Instance* instance, void* resolve(const char* module, const char* name));

void s490r2FreeInstance(s490r2Instance* instance);

#endif /* s490r2_H */

