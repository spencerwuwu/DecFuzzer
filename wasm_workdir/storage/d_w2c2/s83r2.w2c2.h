#ifndef s83r2_H
#define s83r2_H

#include "w2c2_base.h"

typedef struct s83r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s83r2Instance;

void f0(s83r2Instance*);

void f1(s83r2Instance*);

U32 f2(s83r2Instance*);

void f3(s83r2Instance*,U32);

void f4(s83r2Instance*,U32);

void s83r2____wasm_call_ctors(s83r2Instance*i);

void s83r2____wasm_apply_data_relocs(s83r2Instance*i);

U32 s83r2_func_1(s83r2Instance*i);

void s83r2_call_cb(s83r2Instance*i,U32 l0);

void s83r2Instantiate(s83r2Instance* instance, void* resolve(const char* module, const char* name));

void s83r2FreeInstance(s83r2Instance* instance);

#endif /* s83r2_H */

