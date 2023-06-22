#ifndef s967r2_H
#define s967r2_H

#include "w2c2_base.h"

typedef struct s967r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s967r2Instance;

void f0(s967r2Instance*);

void f1(s967r2Instance*);

U32 f2(s967r2Instance*);

void f3(s967r2Instance*,U32);

U32 f4(s967r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s967r2Instance*,U32,U32,U32,U32,U32);

void f6(s967r2Instance*,U32);

void f7(s967r2Instance*,U32,U32,U32);

void f8(s967r2Instance*,U32,U32,U32);

void s967r2____wasm_call_ctors(s967r2Instance*i);

void s967r2____wasm_apply_data_relocs(s967r2Instance*i);

U32 s967r2_func_1(s967r2Instance*i);

void s967r2_call_cb(s967r2Instance*i,U32 l0);

void s967r2Instantiate(s967r2Instance* instance, void* resolve(const char* module, const char* name));

void s967r2FreeInstance(s967r2Instance* instance);

#endif /* s967r2_H */

