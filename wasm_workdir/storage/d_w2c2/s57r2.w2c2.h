#ifndef s57r2_H
#define s57r2_H

#include "w2c2_base.h"

typedef struct s57r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s57r2Instance;

void f0(s57r2Instance*);

void f1(s57r2Instance*);

U32 f2(s57r2Instance*);

void f3(s57r2Instance*,U32);

void f4(s57r2Instance*,U32);

void s57r2____wasm_call_ctors(s57r2Instance*i);

void s57r2____wasm_apply_data_relocs(s57r2Instance*i);

U32 s57r2_func_1(s57r2Instance*i);

void s57r2_call_cb(s57r2Instance*i,U32 l0);

void s57r2Instantiate(s57r2Instance* instance, void* resolve(const char* module, const char* name));

void s57r2FreeInstance(s57r2Instance* instance);

#endif /* s57r2_H */

