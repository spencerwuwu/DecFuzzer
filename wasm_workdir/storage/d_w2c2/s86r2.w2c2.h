#ifndef s86r2_H
#define s86r2_H

#include "w2c2_base.h"

typedef struct s86r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s86r2Instance;

void f0(s86r2Instance*);

void f1(s86r2Instance*);

U32 f2(s86r2Instance*);

void f3(s86r2Instance*,U32);

void f4(s86r2Instance*,U32);

void s86r2____wasm_call_ctors(s86r2Instance*i);

void s86r2____wasm_apply_data_relocs(s86r2Instance*i);

U32 s86r2_func_1(s86r2Instance*i);

void s86r2_call_cb(s86r2Instance*i,U32 l0);

void s86r2Instantiate(s86r2Instance* instance, void* resolve(const char* module, const char* name));

void s86r2FreeInstance(s86r2Instance* instance);

#endif /* s86r2_H */

