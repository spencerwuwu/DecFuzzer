#ifndef s485r2_H
#define s485r2_H

#include "w2c2_base.h"

typedef struct s485r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s485r2Instance;

void f0(s485r2Instance*);

void f1(s485r2Instance*);

U32 f2(s485r2Instance*);

void f3(s485r2Instance*,U32);

U32 f4(s485r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s485r2Instance*,U32,U32,U32,U32,U32);

void f6(s485r2Instance*,U32);

void f7(s485r2Instance*,U32,U32,U32);

void f8(s485r2Instance*,U32,U32,U32);

void s485r2____wasm_call_ctors(s485r2Instance*i);

void s485r2____wasm_apply_data_relocs(s485r2Instance*i);

U32 s485r2_func_1(s485r2Instance*i);

void s485r2_call_cb(s485r2Instance*i,U32 l0);

void s485r2Instantiate(s485r2Instance* instance, void* resolve(const char* module, const char* name));

void s485r2FreeInstance(s485r2Instance* instance);

#endif /* s485r2_H */

