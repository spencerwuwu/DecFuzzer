#ifndef s226r2_H
#define s226r2_H

#include "w2c2_base.h"

typedef struct s226r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s226r2Instance;

void f0(s226r2Instance*);

void f1(s226r2Instance*);

U32 f2(s226r2Instance*);

void f3(s226r2Instance*,U32);

U32 f4(s226r2Instance*,U32,U32,U32);

void f5(s226r2Instance*,U32,U32,U32,U32,U32);

void f6(s226r2Instance*,U32);

void f7(s226r2Instance*,U32,U32,U32);

void f8(s226r2Instance*,U32,U32,U32);

void s226r2____wasm_call_ctors(s226r2Instance*i);

void s226r2____wasm_apply_data_relocs(s226r2Instance*i);

U32 s226r2_func_1(s226r2Instance*i);

void s226r2_call_cb(s226r2Instance*i,U32 l0);

void s226r2Instantiate(s226r2Instance* instance, void* resolve(const char* module, const char* name));

void s226r2FreeInstance(s226r2Instance* instance);

#endif /* s226r2_H */

