#ifndef s78r2_H
#define s78r2_H

#include "w2c2_base.h"

typedef struct s78r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s78r2Instance;

void f0(s78r2Instance*);

void f1(s78r2Instance*);

U32 f2(s78r2Instance*);

void f3(s78r2Instance*,U32);

U32 f4(s78r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s78r2Instance*,U32,U32,U32,U32,U32);

void f6(s78r2Instance*,U32);

void f7(s78r2Instance*,U32,U32,U32);

void f8(s78r2Instance*,U32,U32,U32);

void s78r2____wasm_call_ctors(s78r2Instance*i);

void s78r2____wasm_apply_data_relocs(s78r2Instance*i);

U32 s78r2_func_1(s78r2Instance*i);

void s78r2_call_cb(s78r2Instance*i,U32 l0);

void s78r2Instantiate(s78r2Instance* instance, void* resolve(const char* module, const char* name));

void s78r2FreeInstance(s78r2Instance* instance);

#endif /* s78r2_H */
