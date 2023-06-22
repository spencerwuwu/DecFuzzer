#ifndef s725r2_H
#define s725r2_H

#include "w2c2_base.h"

typedef struct s725r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s725r2Instance;

void f0(s725r2Instance*);

void f1(s725r2Instance*);

U32 f2(s725r2Instance*);

void f3(s725r2Instance*,U32);

void f4(s725r2Instance*,U32);

void s725r2____wasm_call_ctors(s725r2Instance*i);

void s725r2____wasm_apply_data_relocs(s725r2Instance*i);

U32 s725r2_func_1(s725r2Instance*i);

void s725r2_call_cb(s725r2Instance*i,U32 l0);

void s725r2Instantiate(s725r2Instance* instance, void* resolve(const char* module, const char* name));

void s725r2FreeInstance(s725r2Instance* instance);

#endif /* s725r2_H */

