#ifndef s331r2_H
#define s331r2_H

#include "w2c2_base.h"

typedef struct s331r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s331r2Instance;

void f0(s331r2Instance*);

void f1(s331r2Instance*);

U32 f2(s331r2Instance*);

void f3(s331r2Instance*,U32);

U32 f4(s331r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s331r2Instance*,U32,U32,U32,U32,U32);

void f6(s331r2Instance*,U32);

void f7(s331r2Instance*,U32,U32,U32);

void f8(s331r2Instance*,U32,U32,U32);

void s331r2____wasm_call_ctors(s331r2Instance*i);

void s331r2____wasm_apply_data_relocs(s331r2Instance*i);

U32 s331r2_func_1(s331r2Instance*i);

void s331r2_call_cb(s331r2Instance*i,U32 l0);

void s331r2Instantiate(s331r2Instance* instance, void* resolve(const char* module, const char* name));

void s331r2FreeInstance(s331r2Instance* instance);

#endif /* s331r2_H */

